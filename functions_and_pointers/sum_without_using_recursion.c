//A 5-digit positive integer is entered through the keyboard,
//write a function to calculate sum of digits of the 5-digit number:
//Without using recursion.

#include<stdio.h>
int sum(int n);

int main()
{
    int num,s;

    printf("Enter the five digit positive integer: \n");
    scanf("%d",&num);

    s=sum(num);

    printf("Sum of five digit positive integer is %d\n",s);
}
int sum(int n)
{
    int remainder,sum=0;

    while(n>0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    return (sum);
}
