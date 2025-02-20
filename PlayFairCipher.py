def create_playfair_table(key):
    key = ''.join(sorted(set(key), key=lambda k: key.index(k)))  # Remove duplicates and keep order
    alphabet = 'ABCDEFGHIKLMNOPQRSTUVWXYZ'  # J is excluded
    table = [k for k in key.upper() if k in alphabet]
    table += [c for c in alphabet if c not in table]
    return [table[i:i + 5] for i in range(0, 25, 5)]

def prepare_text(text):
    text = text.upper().replace('J', 'I')
    prepared = ""
    i = 0
    while i < len(text):
        prepared += text[i]
        if i + 1 < len(text) and text[i] == text[i + 1]:
            prepared += 'X'
        elif i + 1 < len(text):
            prepared += text[i + 1]
            i += 1
        i += 1
    if len(prepared) % 2 != 0:
        prepared += 'X'
    return prepared

def playfair_encrypt(plaintext, key):
    table = create_playfair_table(key)
    prepared_text = prepare_text(plaintext)
    ciphertext = ""
    for i in range(0, len(prepared_text), 2):
        digraph = prepared_text[i:i + 2]
        pos1 = [(ix, iy) for ix, row in enumerate(table) for iy, c in enumerate(row) if c == digraph[0]][0]
        pos2 = [(ix, iy) for ix, row in enumerate(table) for iy, c in enumerate(row) if c == digraph[1]][0]

        if pos1[0] == pos2[0]:  # Same row
            ciphertext += table[pos1[0]][(pos1[1] + 1) % 5]
            ciphertext += table[pos2[0]][(pos2[1] + 1) % 5]
        elif pos1[1] == pos2[1]:  # Same column
            ciphertext += table[(pos1[0] + 1) % 5][pos1[1]]
            ciphertext += table[(pos2[0] + 1) % 5][pos2[1]]
        else:  # Rectangle
            ciphertext += table[pos1[0]][pos2[1]]
            ciphertext += table[pos2[0]][pos1[1]]

    return ciphertext

def playfair_decrypt(ciphertext, key):
    table = create_playfair_table(key)
    plaintext = ""
    for i in range(0, len(ciphertext), 2):
        digraph = ciphertext[i:i + 2]
        pos1 = [(ix, iy) for ix, row in enumerate(table) for iy, c in enumerate(row) if c == digraph[0]][0]
        pos2 = [(ix, iy) for ix, row in enumerate(table) for iy, c in enumerate(row) if c == digraph[1]][0]

        if pos1[0] == pos2[0]:  # Same row
            plaintext += table[pos1[0]][(pos1[1] - 1) % 5]
            plaintext += table[pos2[0]][(pos2[1] - 1) % 5]
        elif pos1[1] == pos2[1]:  # Same column
            plaintext += table[(pos1[0] - 1) % 5][pos1[1]]
            plaintext += table[(pos2[0] - 1) % 5][pos2[1]]
        else:  # Rectangle
            plaintext += table[pos1[0]][pos2[1]]
            plaintext += table[pos2[0]][pos1[1]]

    return plaintext.replace('X', '')
