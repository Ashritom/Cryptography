/* Write a C program that contains a string with value "Hello World" and
 print the ASCII of each character of the string */
 
 #include<stdio.h>
 #include<string.h>
 int main(){
 	char str[] = "Hello WOrld";
 	int i = 0;
 	int len = strlen(str);
 	for(i=0;i<len;i++){
 		printf("%d ",str[i]);
 	}
 	return 0;
 }
