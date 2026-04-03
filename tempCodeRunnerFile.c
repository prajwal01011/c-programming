#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("enter number to find the sum of series\n");
    scanf("%d",&num);
    
for(int i=1;i<=num;i++){
    
    
    
    sum=sum+i;
    
    
}
printf ("%d\n",sum);

    return 0;
}