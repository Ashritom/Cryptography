/* Write a C program with string containing Hello World, 
the program should XOR each character in teh string with 0 and display the result */

#include<stdio.h>
#include<string.h>
int main(){
	char str[]="Hello World";
	printf("String before XOR : %s\n",str);
	int len,i=0;
	len = strlen(str);
	printf("String after XOR is : ");
	for(i=0;i<len;i++){
		char s = str[i]^0;
		printf("%c",s);
	}
	return 0;
}
