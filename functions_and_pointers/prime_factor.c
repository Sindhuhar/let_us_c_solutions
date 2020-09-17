//A positive integer is entered through the keyboard.
//Write a function to obtain the prime factors of this number.
//For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7.

#include<stdio.h>
void primefactor(int num);

int main()
{
    int num;

    printf("Enter the number: \n");
    scanf("%d",&num);

    printf("prime factor of %d is: ",num);
    primefactor(num);
    printf("\n");


}
void primefactor(int n)
{
    int i=2;

    while(n!=1)
    {
        if(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else
        {
            i++;
            continue;
        }
    }
}
