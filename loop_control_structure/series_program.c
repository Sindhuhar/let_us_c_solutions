//program to add first seven terms of the following series using a for loop:
//1/1!+2/2!+3/3!+ ……

#include<stdio.h>
int main()
{
    int i=1,j;
    float fact=1.0,sum=0.0;

    while(i<=7)
    {
        for(j=1;j<=i;j++)
            fact=fact*j;

        sum=sum+i/fact;
        i++;
    }
    printf("Sum of series = %f\n",sum);
}
