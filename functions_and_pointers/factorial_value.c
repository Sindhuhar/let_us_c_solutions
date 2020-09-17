//Write a function to calculate the factorial value of an integer

#include<stdio.h>
int factorial(int n);
int main()
{
    int num,fact;

    printf("Enter the number: \n");
    scanf("%d",&num);

    fact=factorial(num); //will work up to 19 only
    printf("The factorial value of %d is %d\n",num,fact);
}
int factorial(int n)
{
    int i,f=1;

    for(i=1; i<=n; i++)
        f=f*i;
    return(f);
}
