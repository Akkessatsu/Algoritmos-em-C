#include <stdio.h>

//Program that given a binary expression calculates it and displays the result

int main(void){

    float number1, number2;
    char operator;

    printf("Insert the expression: ");
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) {

        case '*':
        case 'x':

            printf("%.2f %c %.2f = %.2f\n", number1, operator, number2, number1 * number2);

            break;

        case '/':

            if (number2 == 0){

                printf("Undertemined\n");

                break;
            }
            
            printf("%.2f %c %.2f = %.2f\n", number1, operator, number2, number1 / number2);

            break;
        
        case '+':

            printf("%.2f %c %.2f = %.2f\n", number1, operator, number2, number1 + number2);

            break;

        case '-':

            printf("%.2f %c %.2f = %.2f\n", number1, operator, number2, number1 - number2);  

            break; 

        default:

            printf("Unknwon operator");
    }

    return 0;
}