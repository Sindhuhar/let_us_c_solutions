//A positive integer is entered through the keyboard,
//write a program to obtain the prime factors of the number.
//Modify the function suitably to obtain the prime factors recursively.

#include<stdio.h>
void factor( int n);

int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    printf("Prime factors are\n");
    factor(num);
}
void factor( int n)
{
    static int i=2;

    if(i<=n)
    {
        if(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else
            i++;
        factor(n); //recursive call
    }
}
