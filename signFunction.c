#include <stdio.h>

//Program that implements the sign function

int main(void){

    float number;

    printf("Type the number that you want: ");
    scanf("%f", &number);

    printf("%i\n", number < 0 ? -1 : number != 0 ? 1 : 0);

    return 0;
}