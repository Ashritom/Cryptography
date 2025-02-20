// Ceaser Cipher Program for any given string and key value
#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int key,i;
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    printf("Enter the key: ");
    scanf("%d",&key);
    int len = strlen(str);
    for(i=0;i<len;i++){
        int s = key+(int)str[i];
        printf("%c",s);
    }
    return 0;
}
