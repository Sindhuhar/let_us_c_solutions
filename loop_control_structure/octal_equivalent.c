//Program to find the octal equivalent of the entered number.

#include<stdio.h>
int main()
{
    int num,i=0,j=1,k=0,n;

    printf("Enter the number: \n");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
        i=(n%8)*j;
        n=n/8;
        j=j*10;
        k=k+i;
    }
    printf("Octal equivalent of %d is %d\n",num,k);
}
