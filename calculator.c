#include <stdio.h>
//  function to call sum
int sum(int,int );
int sum(int x, int y){
    printf("================================================================\n");
    printf("sum is %d\n",x+y);
    printf("================================================================\n");
    return x+y;
}
// function to call subtraction
int sub(int,int);
int sub(int x, int y){
    printf("================================================================\n");
    printf("subtract is %d\n",x-y);
    printf("================================================================\n");
    return x-y;
}
//function to do multiplication
int multiplication(int ,int);
int multiplication(int x,int y){
    printf("================================================================\n");
    printf("multiplication is %d",x*y);
    printf("================================================================\n");
    return x*y;
}
//function to do division
float division(float ,float);
float division(float x, float y){
    printf("================================================================\n");
    printf("division is :  %2f",x/y);
    printf("================================================================\n");
    return x/y;
}
int main()

{
    //function to give user discription and take user input
    int function;
    int first,second;
    int user;
    float numerator,Denominator;
    printf(" TO add press : 1\n TO subtract press : 2\n TO multiply press : 3 \n TO division press : 4 \n ");
    printf("please enter the number of function you want to do :");
    scanf("%d",&function);
    // switch case use to do calculation acaording to user need
    switch(function){
        
    case 1://function to add two number
    printf("================================================================\n");
    printf("you have presssed 1 to do addition \n");
    printf("=================================================================\n");
    printf("enter a number to add:");
    scanf("%d",&first);
     printf("enter the second number:");
    scanf("%d",&second);
    
    sum(first,second);
    
    //to make sure user is interested on uncomming program
        printf("press 1 to continue program and 0 to end it:\n");
        printf("================================================================\n");
        scanf("%d",&user);
        if(user==0){
            break;
        }
        else{
            printf("\n");
            
        }
        printf("if you want to subtract press 1 and to  move to another press 0  \n");
        printf("================================================================\n");
        scanf("%d",&user);
        if(user==1){
        
        case 2://function to do subtraction
        printf("================================================================\n");
        printf("you have presssed 2 to do subtraction \n");
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
        printf("================================================================\n");
        scanf("%d",&user);
        if(user==0){
            printf("================================================================\n");
            break;
        }
        else{
            printf("\n");
            
        }
    
        printf("if you want to do multiplication press 1 and to  move to another press 0  \n");
        scanf("%d",&user);
        if(user==1){
        case 3://case to do multiplication
        printf("================================================================\n");
        printf("you have presssed 3 to do multiplication \n");
        printf("enter a number:");
         scanf("%d",&first);
        printf("enter a second number:");
        scanf("%d",&second);
        printf("================================================================\n");
        multiplication(first,second);
        
        }
        else {
            printf("================================================================\n");
            printf("\n");
        }
     //function to ask user interset
         printf("press 1 to continue program and 0 to end it:");
         printf("================================================================\n");
        scanf("%d",&user);
        if(user==0){
            printf("================================================================\n");
            break;
        }
        else{
            printf("================================================================\n");
            printf("\n");
            
        }
        printf("================================================================\n");
        printf("you want to do division than press 1 and to move to another press 0\n");
        scanf("%d",&user);
        if(user==1){
        case 4://functon to divide
        printf("================================================================\n");
         printf("you have presssed 4 to do division \n");   
         printf("================================================================\n");
          printf("enter a numerator:");
         scanf("%f",&numerator);
        printf("enter a Denominator:");
        scanf("%f",&Denominator);
        printf("================================================================\n");
        division(numerator,Denominator);
        }
        else{
            printf("================================================================\n");
        }
    return 0;
    }   
}