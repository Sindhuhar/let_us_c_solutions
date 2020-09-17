// Program to calculate overtime pay of 10 employees.
//Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours.
//Assume that employees do not work for fractional part of an hour.

#include<stdio.h>
int main()
{
    float otpay;
    int hrs,i=1;

    while(i<=10)
    {
        printf("Enter the number of hours worked\n");
        scanf("%d",&hrs);

        if(hrs>=40)
        {
            otpay=(hrs-40)*12;
            printf("Number of hours worked=%d \n Over time pay=Rs.%f\n",hrs,otpay);
        }
        else
        {
            otpay=0;
            printf("Number of hours worked (%d) is less than 40 hours \n hence no over time pay",hrs);
        }
        i++;
    }
}
