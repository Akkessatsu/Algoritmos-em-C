#include <stdio.h>

//Program that checks if a given number passed by the user is odd or even

int main(void){

    int number;
    
    printf("Insert the number to check: ");
    scanf("%i", &number);

    number % 2 == 0 ? printf("%i is even\n", number) : printf("%i is odd\n" ,number);

    return 0;
}