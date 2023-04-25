#include <stdio.h>

//Program that evaluates the gcd (greatest common divisor) of two given numbers (u and v)
//It applies the algorithm of Euclides:
//Step 1: If v is equal to 0, than the gcd is u
//Step 2: temp = u % v, u = v, v = temp

int main(void){

    int u, v, temp;

    printf("Insert the two numbers for gcd:");
    
    scanf("%i%i",&u,&v);

    while (v != 0){

        temp = u % v;
        u = v;
        v = temp;
        
    }

    printf("\nThe gcd of the numbers above is %i", u);

    return 0;

}
