//Program to obtain the sum of the first and last digit of the four digit number.

#include<stdio.h>
int main()
{
    int n,a,sum=0;

    printf("Enter the four digit number \n");
    scanf("%d",&n);

    a=n/1000;
    sum=sum+a;

    a=n%10;
    sum=sum+a;

    printf("The sum of first and last digit of the number is %d",sum);
}
