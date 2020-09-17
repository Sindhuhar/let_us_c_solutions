//A 5-digit positive integer is entered through the keyboard,
//write a function to calculate sum of digits of the 5-digit number:
//Using recursion.

#include<stdio.h>
int rsum(int n);

int main()
{
    int num,rs;

    printf("Enter the five digit positive integer: \n");
    scanf("%d",&num);

    rs=rsum(num);

    printf("Sum of five digit positive integer is %d\n",rs);
}
int rsum(int n)
{
    int remainder,sum=0;

    if(n!=0)
    {
        remainder=n%10;
        sum=remainder+rsum(n/10);
    }
    return (sum);
}


