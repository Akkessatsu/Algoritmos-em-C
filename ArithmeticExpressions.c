#include <stdio.h>

int main()
{
    int a = 100, b = 2, c = 25, d = 4, result;

    result = a + b; //Addition
    printf("The sum of %i and %i is %i\n", a, b, result);

    result = b - d; //Subtraction
    printf("The difference of %i and %i is %i\n", b, d, result);

    result = a / b; //Division
    printf("The division of %i and %i results in %i\n", a , b, result);

    result = a * b + c * d / b; //Precedence
    printf("The evaluation of the expression: %i * %i + %i * %i / %i is %i\n" , a, b , c , d, d, result);

    printf("The evaluation of the expression: %i * %i + %i * %i / %i is %i\n" , a, b , c , d, d, a * b + c * d / b);
    //Above, we see that we can use fully expressions to be printed in the printf() routine

    return 0;
}
