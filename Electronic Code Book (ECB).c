//Write a C program  to implement the Electronic Code Book (ECB)?

#include <stdio.h>
#include <string.h>
int main() {
    char key[100];
    char plaintext[100];
int i;
    printf("Enter the plain Text: ");
    scanf("%s", plaintext);
    printf("Enter the Key: ");
    scanf("%s", key);
    if (strlen(plaintext) != strlen(key)) {
        printf("The length of the string and the key should be the same.\n");
        return 1;  
    }
    int length = strlen(plaintext);
    char ciphertext[length + 1];
    char decryptedtext[length + 1];
    for (i = 0; i < length; i++) {
        ciphertext[i] = plaintext[i] ^ key[i];
    }
    ciphertext[length] = '\0';  
    printf("Ciphertext: ");
    for (i = 0; i < length; i++) {
        printf("%c", ciphertext[i]);
    }
    printf("\n");
    for (i = 0; i < length; i++) {
        decryptedtext[i] = ciphertext[i] ^ key[i];
    }
    decryptedtext[length] = '\0';
    printf("Decrypted Text: %s\n", decryptedtext);
    return 0;
}

