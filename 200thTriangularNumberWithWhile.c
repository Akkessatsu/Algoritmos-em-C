#include <stdio.h>

//Program that evaluates the 200th triangular number using while statement rather than for
//Exercise retired from the book 'Programming in C' by Stephen G. Kochan
//Chapter 5 - Exercise 9

int main(void){

    int n, triangularNumber;

    triangularNumber = 0;
    n = 1;

    while (n < 201){
        triangularNumber += n;

        n += 1;
    }

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}