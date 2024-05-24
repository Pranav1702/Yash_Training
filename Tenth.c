/*Simple Calculator:
Write a program that takes two numbers and an operator (+, -, *, /) as input and uses if statements to 
perform the corresponding arithmetic operation. Print the result.*/

#include <stdio.h>

int main()
{
    char c;
    int a;
    int b;
    printf("Enter the operator:\n");
    scanf("%c",&c);
    printf("Enter the operands:\n");
    scanf("%d%d",&a,&b);
    if(c=='+'){
        printf("The Sum of two number is:\t%d",a+b);
    }
    if(c=='-'){
        printf("The Substraction of two number is:\t%d",a-b);
    }
    if(c=='*'){
        printf("The Multiplication of two number is:\t%d",a*b);
    }
    if(c=='/'){
        printf("The Division of two number is:\t%d",a/b);
    }

    return 0;
}

