#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int main() {
    char plaintext[100], ciphertext[100];
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, j;
    srand(time(0));
    for (i = 0; i < 26; i++) {
        j = rand() % 26;
        char temp = alphabet[i];
        alphabet[i] = alphabet[j];
        alphabet[j] = temp;
    }
    printf("Enter plaintext: ");
    scanf("%[^\n]%*c", plaintext);
    for (i = 0; plaintext[i] != '\0'; i++) {
        if (isalpha(plaintext[i])) {
            char letter = toupper(plaintext[i]);
            ciphertext[i] = alphabet[letter - 'A'];
        } else {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[i] = '\0';
    printf("Ciphertext: %s\n", ciphertext);
    return 0;
}

