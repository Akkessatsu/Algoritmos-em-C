#include <stdio.h>

//Program that given a number of grades calculates the average of them
//and counts how many falling grades

int main(void){

    int numberOfGrades, failGrades = 0;
    float sumOfGrades = 0, grade;

    printf("How many grades do you want to insert?: ");
    scanf("%i", &numberOfGrades);

    printf("\n");

    for (int i = 0; i < numberOfGrades; ++i){

        printf("Insert the grade: ");
        scanf("%f", &grade);

        if (grade < 65) 
            failGrades += 1;

        sumOfGrades += grade;
    }

    printf("\nThe average of the grade is %.2f\n", sumOfGrades / numberOfGrades);
    printf("The number of failled grades is %i\n", failGrades);

    return 0;
}