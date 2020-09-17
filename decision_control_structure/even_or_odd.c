//Program to find the number is an odd number or even number.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);

    if(num%2==0)
        printf("%d is Even number\n",num);
    else
        printf("%d is an odd number\n",num);
}
