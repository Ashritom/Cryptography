//S-Box to P-Box

#include<stdio.h>
int main(){
int s[8],p[12];
int i=0;
printf("Enter 4 elements for 2 S-boxes (8 elements in total): ");
for(i=0;i<8;i++){
	scanf("%d",&s[i]);
}
p[0]=s[7];
p[1]=s[0];
p[2]=s[1];
p[3]=s[2];
p[4]=s[3];
p[5]=s[4];

p[6]=s[3];
p[7]=s[4];
p[8]=s[5];
p[9]=s[6];
p[10]=s[7];
p[11]=s[0];
printf("The 2 P-Box elements are: \n");
for(i=0;i<12;i++){
	printf("%d ",p[i]);
}
return 0;
}
