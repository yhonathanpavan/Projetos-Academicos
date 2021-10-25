#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;
    printf("Digite uma temperatura em Fahrenheit: \n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%f Fahrenheit equivale a %f Celsius", fahrenheit, celsius);
    return 0;
}
