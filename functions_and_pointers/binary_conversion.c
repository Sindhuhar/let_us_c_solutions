//Write a function to find the binary equivalent of a given decimal integer and display it.

#include<stdio.h>
int binarycon(int n);

int main()
{
    int num,bin;

    printf("Enter a decimal number: ");
    scanf("%d",&num);

    bin=binarycon(num);

    printf("The binary equivalent of %d is %d\n",num,bin);
}
int binarycon(int n)
{
    if(n==0)
    {
        return (0);
    }
    else
    {
        return ((n%2)+10*binarycon(n/2));
    }
}
