// Program to find the factorial value of a number entered through the keyboard.

#include<stdio.h>
int main()
{
    int num,i=1;
    unsigned long int fact=1;

    printf("Enter the number(less than 34)\n");
    scanf("%d",&num);

    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d=%lu",num,fact);
}
