#include <stdio.h>
#define PI 3.14
int main()
{
    float radius;
    float area;
    float circumference;
    printf("Enter the Radius of Circle:\n");
    scanf("%f",&radius);
    
    area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("The Area is %f\n", area);
    printf("The circumference is %f\n", circumference);

    return 0;
}
