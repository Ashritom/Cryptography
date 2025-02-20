/* Write a C program that should XOR each Character of 
String with 0 and display the result */

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i=0;
	printf("Enter the String: ");
	scanf("%[^\n]",str);
	int len = strlen(str);
	printf("The String after XOR with 0 is : ");
	for(i=0;i<len;i++){
		int xor = str[i]^0;
		printf("%c",xor);
	}
	return 0;
}
