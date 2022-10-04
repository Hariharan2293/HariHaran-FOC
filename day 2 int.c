#include<stdio.h>  
 int main()    
{
	int n,f,g,k;
	printf("enter");
	scanf("%d",&n);
	f=n/100;
	g=n%10;
	k=n/10;
	int z=k%10;
	printf("%d",f);
	printf("%d",g);
	printf("%d",z);
	return 0;
}
