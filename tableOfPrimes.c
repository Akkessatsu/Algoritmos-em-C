#include <stdio.h>

//Program that generates a table of the first n prime numbers

int main(void){

    int numberOfPrimes;
    int count = 0;
    _Bool isPrime;

    printf("Insert the number of the sequence: ");
    scanf("%i", &numberOfPrimes);

    for (int p = 2; count < numberOfPrimes; p++){

        isPrime = 1;

        for (int d = 2; d < p - 1; d++){

            if (p % d == 0)
                isPrime = 0;

        }

        

        if (isPrime){

            count++;

            printf("#%i %i\n",count, p);
        }

    }

    return 0;
}