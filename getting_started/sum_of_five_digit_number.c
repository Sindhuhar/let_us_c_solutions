//Program to calculate the sum of the five digit number.
//Hint: use the modulus operator '%'.

#include<stdio.h>
int main()
{
    int num,n,a;
    int sum=0;

    printf("Enter the five digit number(less than 32767) \n");
    scanf("%d",&num);

    a=num%10;
    n=num/10;
    sum=sum+a;

    a=num%10;
    n=num/10;
    sum=sum+a;

    a=num%10;
    n=num/10;
    sum=sum+a;

    a=num%10;
    n=num/10;
    sum=sum+a;

    a=num%10;
    sum=sum+a;

    printf("The sum of the five digits of %d is %d",num,sum);

}
