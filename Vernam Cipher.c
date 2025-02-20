/* Writea C program to Perform the Vernam Cipher Technique */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], key[100], ct[100];
    int i=0;
    printf("Enter the Plain Text: ");
    scanf("%[^\n]", str); 
 fflush(stdin);
    printf("Enter the Key: ");
    scanf("%[^\n]", key); 
	int lp = strlen(str);
    int lk = strlen(key);

    if (lp != lk) {
        printf("The length of the Plain Text and the Key should be the same.\n");
    } else {
        printf("Cipher Text: ");
        for (i = 0; i < lp; i++) {
            ct[i] = str[i] ^ key[i];
            printf("%c", ct[i]);
        }
        ct[lp] = '\0'; 
        printf("\n");

        int i=0;
        printf("Decrypted Text: ");
        for (i = 0; i < lp; i++) {
            printf("%c", ct[i] ^ key[i]); 
        }
        printf("\n");
    }
    return 0;
}

