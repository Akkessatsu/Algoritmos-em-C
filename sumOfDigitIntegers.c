#include <stdio.h>
//Program that realizes the sum of the digits of an intenger passed by the user

int main(void){
    int number, aux;
    int sum = 0;

    printf("What is the number that you want to sum?: ");
    scanf("%i", &number);

    aux = number;

    while (number / 10 < 0) {//If this division results in other result than negative that means it's the last digit (because the quocient will be 0) (for negative values)

        sum += -1 * number % 10; //Get the right-most digit and turn it into a positive value. Also, adds it toi the variable sum

        number /= 10; //Drop the last extracted digit

    }

    while (number / 10 > 0){//If this division results in other result than positive that means it's the last digit (because the quocient will be 0) (for positive values)

        sum += number % 10;

        number /= 10;
    }

    sum += number; //Sum the last digit (the negative one) to the variable of digits sum

    printf("The sum of the digits of %i is %i\n", aux, sum); //Print the results


    return 0; //End of program
}