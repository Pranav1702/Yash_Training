#include <stdio.h>
#define A 9/5
#define B 5/9
int main()
{
    float Celsius;
    float Farehnite;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&Celsius);
    Farehnite=(Celsius*A)+32;
    Celsius=(Farehnite-32)*B;
    printf("The temperature in Farehnite %f\n", Farehnite);
        printf("The temperature in Celsius %f\n", Celsius);

    

    return 0;
}

