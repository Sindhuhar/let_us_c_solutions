//program to find the value of one number raised to the power of another.

#include<stdio.h>
int main()
{
    int a,b,i=1;
    long int power=1;

    printf("Enter the two number\n");
    scanf("%d %d",&a,&b);

    while(i<=b)
    {
        power=power*a;
        i++;
    }
    printf("%d to the power of %d is %ld",a,b,power);
}
