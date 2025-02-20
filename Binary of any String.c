/* Write a C program that converts given string into Binary Format */

#include<stdio.h>
 #include<string.h>
 int main(){
 	char str[100],bin[12];
 	int n,len,i=0,j=0,k=0;
 	printf("Enter the String: ");
 	scanf("%[^\n]",str);
 	len = strlen(str);
 	for(i=0;i<len;i++){
 		n = (int)str[i];
 		while(n>0){
 			bin[j] = n%2;
 			n=n/2;
 			j++;
 		}
 		for(k=j-1;k>=0;k--){
 			printf("%d ",bin[k]);
 		}
 		printf("\n");
 		j=0;
 	}
 	return 0;
 }
