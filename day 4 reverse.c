#include<stdio.h>
int main()
{
	int n,r,d=0;
	printf("Enter:");
	scanf("%d",&n);
	while(n!=0){
	r=n%10;
	d=d*10+r;
	n=n/10;
}
	printf("%d",d);
	return 0;	
}
