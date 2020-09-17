//Program to reverse the five digit number.

#include<stdio.h>
int main()
{
    int n,a;
    long int revnum=0;
    printf("Enter five digit number(less than 32767) \n");
    scanf("%d",&n);

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

    printf("The reversed number is %ld\n",revnum);

}
