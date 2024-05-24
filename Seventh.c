/*
Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:

Above 30: "It's hot outside, stay hydrated!"
Between 20 and 30: "The weather is nice and warm."
Between 10 and 19: "It's a bit chilly, wear a jacket."
Below 10: "It's cold outside, stay warm!"
*/

#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the num1 value: \n");
    scanf("%d",&num1);
    
    if(num1<10){
        printf("It's cold outside, stay warm!");
    }
    else if(num1>=10&&num1<20){
         printf("It's a bit chilly, wear a jacket.");
    }
    else if(num1>=20&&num1<30){
        printf("The weather is nice and warm.");
    }
    else{
        printf("It's hot outside, stay hydrated!");
    }

    return 0;
}

