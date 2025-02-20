/* Write a program that convert each character in the string to octal format */

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
    printf("%o ",n);
}
    return 0;
}


/*

char str[100];
	printf("Enter a string:");
	scanf("%[^\n]",str);
	int i,len=strlen(str);
	for(i=0;i<len;i++)
	{
		printf("%o ",str[i]);
	}
	
*/
