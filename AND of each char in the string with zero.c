/* Write a C program that should AND each Character of 
String with 0 and display the result */

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i=0;
	printf("Enter the String: ");
	scanf("%[^\n]",str);
	int len = strlen(str);
	printf("The String after AND with 0 is : ");
	for(i=0;i<len;i++){
		char and = str[i]& 0;
		printf("%d",and);  /* the answer will be zero as anything with and 0 is 0 and is null */
	}
	return 0;
}
