#include <stdio.h>

int main()
{
    int total_score;
    printf("Enter the total Score: \n");
    scanf("%d",&total_score);
    if(total_score<60){
        printf("The Grade of Student is F");
    }
    else if(total_score>=60&&total_score<70){
        printf("The Grade of Student is D");
    }
    else if(total_score>=70&&total_score<80){
        printf("The Grade of Student is C");
    }
    else if(total_score>=80&&total_score<90){
        printf("The Grade of Student is B");
    }
    else if(total_score>=90&&total_score<101){
        printf("The Grade of Student is A");
    }
    

    return 0;
}
