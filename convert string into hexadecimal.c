/* Write a program that convert each character in the string to hexa Decimal format */

#include <stdio.h>
#include<string.h>
int main() {
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	int i;
	int len = strlen(str);
	for(i=0;i<len;i++){
	int n = (int)str[i];
    printf("%x ",n);
}
    return 0;
}

