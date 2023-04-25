#include <stdio.h>

//Programa that resolves the polynom: 3x³ - 5x² + 6
//that X = 2.55

int main(void){

    double x = 2.55;

    double result = 3 * (2.55 * 2.55 * 2.55) - 5 * (2.55 * 2.55) + 6;

    printf("The result of 3x³ - 5x² + 6 that X = 2.55 is %g", result);

    return 0;
}

