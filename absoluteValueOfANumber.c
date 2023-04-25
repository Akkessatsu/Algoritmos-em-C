#include <stdio.h>

//Program that displays the absolute value of a given number

int main(void){

    int number;

    printf("What is the number that you want the absolute value?: ");
    scanf("%i",&number);

    printf("|%i| = %i\n", number, (number < 0) ? -1 * number : number);

    return 0;
}