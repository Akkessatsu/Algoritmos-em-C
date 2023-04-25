#include <stdio.h>

//Program that evaluate 5 triangular numbers with the use of while statements rather than for statements
//Exercise retired from the book 'Programming in C' by Stephen G. Kochan
//Chapter 5 - Exercise 9

int main(void){

    int times, triangularNumber, position, index;

    triangularNumber = 0;
    times = 0;
    index = 1;

    while (times < 5){

        printf("What is the position of the triangular number?: ");
        scanf("%i", &position);

        while (index <= position){

            triangularNumber += index;

            index++;

        }

        printf("The triangular number at %i is %i\n\n", position, triangularNumber);

        triangularNumber = 0;
        index = 0;
        
        times++;


    }


    return 0;
}