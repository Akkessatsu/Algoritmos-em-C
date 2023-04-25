#include <stdio.h>

//Program that given a slide of q square computes and display its area and perimeter

int main(void){

    float slide, perimeter, area;

    printf("Insert the slide of the square: ");
    scanf("%f", &slide);

    perimeter = 4 * slide;
    area = slide * slide;

    printf("Area = %.2f\nPerimter = %.2f\n", area, perimeter);


    return 0;
}