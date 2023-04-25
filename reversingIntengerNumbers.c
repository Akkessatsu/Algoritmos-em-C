#include <stdio.h>

//Program that reverse a given number
//Algorithm:
//Step 1: If the number % 10 == 0, than ends the program
//Step 2: Get the right-most digit (number % 10) (stores the number without the extracted digit)
//Step 3: Display the extracted digit
//Step 4: Go to step 1

int main(void){

    int number;

    printf("Insert the number that you want to reverse:");
    scanf("%i",&number);

    do {

        printf("%i", number % 10);

        number /= 10;

    } while (number != 0);
    printf("\n");


    return 0;
}