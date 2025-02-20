// Rivesr Shamir Adleman (RSA) ALgorithm in Public or Asymmetric key exchange (private and public key)

#include<stdio.h>
#include<math.h>
int main(){
	
	int p,q,d,e,m,c,n,x,y,pt,yon,temp,sig;	
	printf("Enter the Message: ");
	scanf("%d",&m);
	printf("Enter 2 prime numbers: ");
	scanf("%d%d",&p,&q);
	printf("Enter the public key: ");
	scanf("%d",&e);
	printf("Enter the private key: ");
	scanf("%d",&d);
	n=p*q;
	
	//Cipher text
	x = pow(m,e);
	c = x%n;
	printf("The cipher text is: %d",c);
	printf("\n");
	//plain text regeneration from cipher text
	y = pow(c,d);
	pt = y%n;
	printf("The Plain text (Message) is: %d",pt);
	
	return 0;
}


// The RSA algo is again written in much better way in another program named RSA
