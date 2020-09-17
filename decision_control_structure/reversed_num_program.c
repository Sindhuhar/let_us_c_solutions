//Program to obtain the reversed number.
//and to determine whether the original and reversed numbers are equal or not.

#include<stdio.h>
int main()
{
    int a,n,num;
    long int revnum=0;

    printf("Enter the number(less than 32767): \n");
    scanf("%d",&n);

    num=n;
    a=n%10;
    n=n/10;
    revnum=revnum+a*10000;

    a=n%10;
    n=n/10;
    revnum=revnum+a*1000;

    a=n%10;
    n=n/10;
    revnum=revnum+a*100;

    a=n%10;
    n=n/10;
    revnum=revnum+a*10;

    a=n%10;
    revnum=revnum+a;

    if(revnum == num)
        printf("Given number and it's reversed number are equal\n");
    else
        printf("Given number and it's reversed number are not equal\n");

}
