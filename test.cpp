#include<stdio.h>
int main ()
{
	int a,b,sum;
/*
	printf ("enter a number:  ");
	scanf ("%d",&sum);*/
	for(a=0;a<=3;a++)
	{
		for(sum=0;sum<=a/2;sum++){
		
		printf(" ");
	}
		 
		for(b=0;b<=3;b++)
		{
			printf (" b ");
		}
		for(sum=0;sum<=a/2;sum++)
		{
			printf(" ");
		}
	
			if(a==b) 
		{
		printf("\n");
		break;
		}
	
		
	
}
	return 0;
}
