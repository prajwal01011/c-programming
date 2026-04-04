#include <stdio.h>
//  function to call sum
int sum(int,int );
int sum(int x, int y){
    printf("sum is %d\n",x+y);
    return x+y;
}
// function to call subtraction
int sub(int,int);
int sub(int x, int y){
    printf("subtract is %d\n",x-y);
    return x-y;
}
//function to do multiplication
int multiplication(int ,int);
int multiplication(int x,int y){
    printf("multiplication is %d",x*y);
    return x*y;
}
//function to do division
float division(float ,float);
float division(float x, float y){
    printf("division is %f",division);
    return x/y;
}
int main()

{
    //function to give user discription and take user input
    int function;
    int first,second;
    int user;
    printf(" for add press 1\n subtract is 2\n multipliction is 3 \n division is 4\n ");
    scanf("%d",&function);
    // switch case use to do calculation acaording to user need
    switch(function){
        
    case 1://function to add two number
    
    printf("enter a number:");
    scanf("%d",&first);
     printf("enter a second number:");
    scanf("%d",&second);
    
    sum(first,second);
    
    //to make sure user is interested in uncomming program
        printf("press 1 to continue program and 0 to end it:");
        scanf("%d",&user);
        if(user==0){
            break;
        }
        else{
            printf("\n");
            
        }
        printf("if you want to subtract press 1 and to  move to another press 0  \n");
        scanf("%d",&user);
        if(user==1){
        
        case 2://function to do subtraction
         printf("enter a number:");
         scanf("%d",&first);
        printf("enter a second number:");
        scanf("%d",&second);
    
    sub(first,second);
        }   
        else{
            printf("\n");
        }
        //function to ask user interset
         printf("press 1 to continue program and 0 to end it:");
        scanf("%d",&user);
        if(user==0){
            break;
        }
        else{
            printf("\n");
            
        }
    
        printf("if you want to do multiplication press 1 and to  move to another press 0  \n");
        scanf("%d",&user);
        if(user==1){
        case 3://case to do multiplication
        printf("enter a number:");
         scanf("%d",&first);
        printf("enter a second number:");
        scanf("%d",&second);
        multiplication(first,second);
        
        }
        else {
            printf("\n");
        }
    return 0;
    }
}