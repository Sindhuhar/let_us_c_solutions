//When interest compounds q times per year at an annual rate of r % for n years,
// the principle p compounds to an amount a as per the following formula
//a = p ( 1 + r / q )^ nq
//Program to read 10 sets of p, r, n & q and calculate the corresponding as.

#include<stdio.h>
#include<math.h>

int main()
{
    float i,p,q,n,a,b,r;

    for(i=1; i<=10; i++)
    {
        printf("Enter principal,rate,time(in year) and compound interest respectively: \n");
        scanf("%f %f %f %f",&p,&r,&n,&q);

        b=pow((1+r/q),n*q);
        a=p*b;

        printf("%f is the amount\n",a);
    }
}
