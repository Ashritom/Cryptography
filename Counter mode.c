//Write a C program to implement the Counter(CTR) Mode?
#include <stdio.h>
#include <string.h>
int main() {
    char key[100], plaintext[100];
    int counter, i, length;
    printf("Enter the plaintext: ");
    scanf("%s", plaintext);
    printf("Enter the key: ");
    scanf("%s", key);
    printf("Enter the initial counter value: ");
    scanf("%d", &counter);
    if (strlen(plaintext) != strlen(key)) {
        printf("The plaintext and key must have the same length.\n");
        return 1;
    }
    length = strlen(plaintext);
    char ciphertext[length + 1];
    char decryptedtext[length + 1];
    for (i = 0; i < length; i++) {
        ciphertext[i] = plaintext[i] ^ key[i] ^ counter;
        counter++;
    }
    ciphertext[length] = '\0';
    printf("Ciphertext: %s\n", ciphertext);
    counter -= length;
    for (i = 0; i < length; i++) {
        decryptedtext[i] = ciphertext[i] ^ key[i] ^ counter;
        counter++;
    }
    decryptedtext[length] = '\0';
    printf("Decrypted Text: %s\n", decryptedtext);
    return 0;
}

