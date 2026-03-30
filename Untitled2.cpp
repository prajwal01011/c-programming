#include <stdio.h>

// function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;   // return the result
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    // function call with argument
    result = sumOfDigits(number);

    printf("Sum of digits = %d", result);

    return 0;
}

