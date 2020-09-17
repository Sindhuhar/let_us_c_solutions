//Ramesh's basic salary is input through the keyboard
//his dearness allowance is 40% of his basic salary.
//and house rent allowance is 20% of basic salary.
//Program to calculate his gross salary.

#include<stdio.h>
int main()
{
    float bs,gs,da,hra;

    printf("Enter basic salary: \n");
    scanf("%f",&bs);

    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+hra+da;

    printf("basic salary is %f\n",bs);
    printf("dearness allowance is %f\n",da);
    printf("house rent allowance is %f\n",hra);
    printf("gross salary is %f\n",gs);

}
