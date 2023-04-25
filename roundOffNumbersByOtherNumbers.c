#include <stdio.h>

//Program that evaluates an integer to the next largest even multiple of another integer

int main(void){

    int i1 = 365, i2 = 12250, i3 = 996;
    int j1 = 7, j2 = 23, j3 = 4;

    printf("The next largest even multiple of %i given %i is %i\n", j1, i1, i1 + j1 - i1 % j1);
    printf("The next largest even multiple of %i given %i is %i\n", j2, i2, i2 + j2 - i2 % j2);
    printf("The next largest even multiple of %i given %i is %i\n", j3, i3, i3 + j3 - i3 % j3);

    return 0;
}
