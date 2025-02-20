/* Write a C program that contain string with value "Hello WOrld" and
 print the string in the Binary Format. */
 
 #include<stdio.h>
 #include<string.h>
 int main(){
 	char str[]="Hello World",bin[12];
 	int n,len,i=0,j=0,k=0;
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
