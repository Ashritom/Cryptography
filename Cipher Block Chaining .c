//Write a C program to implement the Cipher Block Chaining (CBC)?

#include <stdio.h>
#include <string.h>

int main() {
    char key[100], plaintext[100], iv[100];
    int i, length;
    
    printf("Enter the plaintext: ");
    scanf("%s", plaintext);
    printf("Enter the key: ");
    scanf("%s", key);
    printf("Enter the IV: ");
    scanf("%s", iv);
    
    if (strlen(plaintext) != strlen(key) || strlen(plaintext) != strlen(iv)) {
        printf("The plaintext, key, and IV must have the same length.\n");
        return 1;
    }
    
    length = strlen(plaintext);
    char ciphertext[length + 1];
    char decryptedtext[length + 1];
    char previous = iv[0];
    
    for (i = 0; i < length; i++) {
        ciphertext[i] = (plaintext[i] ^ previous) ^ key[i];
        previous = ciphertext[i];
    }
    ciphertext[length] = '\0';
    
    printf("Ciphertext: %s\n", ciphertext);
    
    previous = iv[0];
    
    for (i = 0; i < length; i++) {
        decryptedtext[i] = (ciphertext[i] ^ key[i]) ^ previous;
        previous = ciphertext[i];
    }
    decryptedtext[length] = '\0';
    
    printf("Decrypted Text: %s\n", decryptedtext);
    return 0;
}

