#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    printf("Enter all the three Numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3){
        printf("The Given Number1 %d is largest",num1);
    }
    else if(num2>num1&&num2>num3){
        printf("The Given Number2 %d is largest",num2);
    }
    else{
        printf("The Given Number3 %d is largest",num3);
    }

    return 0;
}

