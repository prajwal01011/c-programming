#include<stdio.h>
int main ()
{
	int a;
	top:
	printf("enter a number\n");
	scanf("%d",&a);
	if(a>0){
		printf("your number is positive\n");
	
	}
	else if(a==0){
		printf("your number is zero\n");
	}
	else{
		printf("your number is negative\n");
	}
	goto top;
	return 0;
}

