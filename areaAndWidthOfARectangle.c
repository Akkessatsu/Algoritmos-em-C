#include <stdio.h>

//Program that given the height and width of a rectangle calculates its area and perimeter

int main(void){

    float height, width, area, perimeter;

    printf("Insert, respectively, the height and width: ");
    scanf("%f %f", &height, &width);

    area = height * width;
    perimeter = (2 * height) + (2 * width);

    printf("Area = %.2f\nPerimter = %.2f\n", area, perimeter);




}