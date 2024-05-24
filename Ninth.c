/*Write a program to convert Binary to decimal*/

#include <stdio.h>
int po(int n){
	int re =1;
	for(int i=0;i<n;i++)
		re=re*2;
	return re;
}

int main()
{
    int a,b;
    int sum=0;
    int c=0;
    printf("Enter the Binary Number: \n");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        if(b==1){
            sum+=po(c);
        }
        a=a/10;
        c++;
    }
printf("The Decimal no. of given binary no. is:\t%d",sum);
    return 0;
}

