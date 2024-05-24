#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int add;
    int sub;
    int division;
    int multiplication;
    printf("Enter the two interger number:\n");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    sub=num1-num2;
    multiplication=num1*num2;
    division=num1/num2;
    printf("The Sum = %d\n", add);
    printf("The Subtraction = %d\n", sub);
    printf("The multiplication = %d\n", multiplication);
    printf("The Division = %d\n", division);
    

    return 0;
}


