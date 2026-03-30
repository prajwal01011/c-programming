#include <stdio.h>

int main() {
	top:
    int numinator,denominator,result;
    printf("enter the numinator\n");
    scanf("%d", &numinator);
    printf("enter the denominator\n");
    scanf("%d",&denominator);
    if(denominator==0)
    {
    printf("the denominator is zero so it can't be divisible\n");    
    }
    else if (numinator%denominator==0)
    {
        int result=numinator/denominator;
        printf("the number is divisible\n");
        printf("numinator is divisible by %d\n",result );
    }
   else {
       int result=numinator%denominator;/* to find riminder */
        printf("the number is undivisible "); 
        printf("but the reminder of  number is  %d \n",result);

        }
    
	goto top;
    return 0;
}


