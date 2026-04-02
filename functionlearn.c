#include<stdio.h>
// function prototype
int sum (int, int);

//function defination
int sum (int x ,int y){
printf("sum is %d \n",x+y);
return x+y;
}

int main(){
    int a=2,b=5;
    sum(a,b);

    int a1=59,a2=404;
    sum(a1,a2);
return 0;
}