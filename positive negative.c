#include<stdio.h>
int main()
{
	int n;
	printf("Enter:");
	scanf("%d",&n);
	if(n<0){
		printf("NEGATIVE!");
	}
	else{
		printf("POSITIVE!");
	}
	return 0;
}
