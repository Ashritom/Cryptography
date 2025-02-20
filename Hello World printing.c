/* Write a C program that contains a string character pointer with value "Hello World" */

#include<stdio.h>
#include<string.h>
int main(){
	char str[] = "Hello World";
	int len = strlen(str);
	int i=0;
	for(i=0;i<len;i++)
	printf("%c",str[i]); // printing character by chareacter
	printf("\n");
	printf("%s",str);  // directly
	return 0;
}
