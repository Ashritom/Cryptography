//P-box to S-box

#include<stdio.h>
int main(){
	int p[6],i=0;
	printf("Enter a P-box elements of size of 6 elements: ");
	for(i=0;i<6;i++){
		scanf("%d",&p[i]);
	}
	printf("The S-box Elements are: \n");
	for (i=1;i<=4;i++){
		printf("%d ",p[i]);
	}
	return 0;
}
