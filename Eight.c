/*BMI Calculator:
Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). Use if statements to classify the BMI into categories:
Below 18.5: Underweight
18.5 to 24.9: Normal weight
25 to 29.9: Overweight
30 and above: Obesity
*/

#include <stdio.h>

int main()
{
    float height;
    float weight;
    float BMI;
    printf("Enter the values of height in metre and weight in Kg:\n");
    scanf("%f%f",&height,&weight);
    printf("Calculating BMI... \n\n");
    BMI=weight/(height*height);
    printf("The BMI is : %f\n",BMI);
    if(BMI<18.5){
        printf("The Human is in Underweight Stage");
    }
    else if(BMI>=18.5&&BMI<25){
        printf("The Human is in Normal Stage");
    }
    else if(BMI>=25&&BMI<30){
        printf("The Human is in Overweight Stage");
    }
    else{
        printf("The Human is in Obesity Stage");
    }

    return 0;
}

