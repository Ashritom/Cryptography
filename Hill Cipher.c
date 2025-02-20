/* write a C program to implement Hill Cipher */

#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char str[100],key[100];
	
	printf("Enter the String: ");
	scanf("%[^\n]",str);
	int ls = strlen(str);
	
	printf("Enter the Key: ");
	scanf("%[^\n]",key);
	int lk = strlen(key);
	
	int size = sqrt(lk);
	
	if (size * size != lk) 
        printf("Key length must be a perfect square.\n");
	
	//Creating the matrix
	
    int keyMatrix[10][10];
    int k = 0,i=0,j=0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            keyMatrix[i][j] = toupper(key[k]) - 'A'; 
            k++;
        }
    }
    
    // Dividing the Text
    char divtxt[100];
    int i=0;
    
    
    //Matrix Multiplication
    
    
    
    
	
	
	
	
	
	
	
}
