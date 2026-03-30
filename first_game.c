#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;
	int Number_Of_Guess=0;
	int guessed;
//    printf("Random number between 1 and 100: %d\n", randomNumber);
	do{
		
	printf("Guess the number\n");
	scanf("%d",&guessed);
	if(guessed>randomNumber)
	{
		printf("lower number please\n");
	}
	else if(randomNumber>guessed){
		
		printf("higher number\n");
	}
	else{
	printf ("congrats!!\n");
	}
	
	Number_Of_Guess++;
	
	
	}while(guessed!=randomNumber);
	
	printf("you guessed right number in %d guesses\n",Number_Of_Guess); 
	
    return 0;
}
