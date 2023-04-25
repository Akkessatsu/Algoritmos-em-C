#include <stdio.h>


//Program that shows the firsts 10 powers of 2

int main(void){

    int n, two_to_the_n;

    printf("TABLE OF THE POWERS OF TWO\n\n");

    printf(" n %3c 2 to the n            \n", ' ');

    printf("---    ----------\n");

    two_to_the_n = 1;

    for (n = 0; n <= 10; ++n){

        printf("%2i       %4i\n", n, two_to_the_n);

        two_to_the_n *= 2;

    }

    return 0;
}