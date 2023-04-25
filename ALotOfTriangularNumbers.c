#include <stdio.h>

//Program that shows the 200 firsts triangular numbers

int main(void){

    int triangularNumber = 0;

    for (int n = 1; n < 201; n += 1){

        triangularNumber += n;

        printf("%-2i         %i\n", n, triangularNumber);
        
    }

    return 0;
}