#include <stdio.h>

//Program that shows a table that relates the value of n to n²
//For intenger values of n ranging 1 to 10

int main(void){

    printf("TABLE THAT RELATES THE VALUES OF n (1 to 10) WITH n² VALUES\n");
    printf("-----                                                  -----\n");
    printf("  n                                                      n² \n");

    for (int n = 0; n < 11; ++n){

        printf(" %2i                                                    %3i\n", n, n * n);


    }
    printf("------------------------------------------------------------\n");


    return 0;
}