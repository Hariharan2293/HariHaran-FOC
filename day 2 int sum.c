#include<conio.h>
#include<stdio.h>
int main()
{
	int n,r,d=0;
	printf("ENTER");
	scanf("%d",&n);
	while(n>0){
		r=n%100;
		d=d+r*10;
	    printf("%d",d);
	}
	return 0;
}
