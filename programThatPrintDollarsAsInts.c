#include <stdio.h>

//Program that shows the use of the decimal point in field width specifications

//The use of dot (.) in width field specifications varies between data types.
//If it is a integer, the use of it means that we want to print the respective variable with .X number of spaces,
//if the spaces are not totally fullfilled the program adds 0 to i.
//If is a floating point number, before the decimal point indicates the width of the value in the strint, and after indicates the number of decimal places in the width.
int main(void){

    int dollars, count;
    int cents;

    for (count = 1; count <= 10; count++){

        printf("Enter dollars: ");
        scanf("%i", &dollars);

        printf("Enter cents: ");
        scanf("%i", &cents);

        printf("$%i.%.3i\n\n", dollars, cents);

    }

    return 0;
}