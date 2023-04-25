#include <stdio.h>

//Program that converts a number to its binary form

int main(void){

    int number, aux, size = 0;

    printf("Insert the number: ");
    scanf("%i", &number); //Inserts the input into the variable number

    aux = number;

    while(aux != 0){ //Gets the size of bits of the number

        aux /= 2;

        ++size;
    }

    int binary[size]; //Sets an array containing the number of bits of the number

    for (int i = 0; i < size; i++){//Converts the number

        binary[i] = number % 2;
        number /= 2;

    }

    printf("0b");

    for (int i = --size; i >= 0; i--){

        printf("%i",binary[i]);

    }

    printf("\n");

    return 0;
}