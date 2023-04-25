int main(void){
    int number, aux;
    int sum = 0;

    printf("What is the number that you want to sum?: ");
    scanf("%i", &number);

    aux = number;

    while (number != 0)
    {

        if (number / 10 < 0) 
        {
             sum += -1 * (number % 10);
        } 
        else 
        {
            sum += number % 10;
        }

        number /= 10;

    } 

    printf("The sum of the digits of %i is %i\n", aux, sum);

    return 0;
}