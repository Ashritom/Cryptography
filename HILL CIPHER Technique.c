#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main() {
    char str[100], key[100];

    printf("Enter the String: ");
    scanf("%[^\n]", str);
    int ls = strlen(str);

    printf("Enter the Key: ");
    getchar(); 
	scanf("%[^\n]", key);
    int lk = strlen(key);

    int size = sqrt(lk);

    if (size * size != lk) {
        printf("Key length must be a perfect square.\n");
        return 1;
    }

    
    int keyMatrix[10][10];
    int k = 0, i = 0, j = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            keyMatrix[i][j] = toupper(key[k]) - 'A';
            k++;
        }
    }

    
    char divtxt[100];
    for (i = 0; i < ls; i++) {
        divtxt[i] = toupper(str[i]);
        if (divtxt[i] < 'A' || divtxt[i] > 'Z') {
            divtxt[i] = 'X'; 
        }
    }

    
    while (ls % size != 0) {
        divtxt[ls] = 'X';
        ls++;
    }
    divtxt[ls] = '\0';

    
    char result[100];
    int temp[10];
    for (k = 0; k < ls; k += size) {
                for (i = 0; i < size; i++) {
            temp[i] = divtxt[k + i] - 'A';
        }

        
        for (i = 0; i < size; i++) {
            result[k + i] = 0;
            for (j = 0; j < size; j++) {
                result[k + i] += keyMatrix[i][j] * temp[j];
            }
            result[k + i] = (result[k + i] % 26) + 'A';
        }
    }
    result[ls] = '\0';

    printf("Encrypted Text: %s\n", result);

    return 0;
}

