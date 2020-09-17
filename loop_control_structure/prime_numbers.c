// program to print all prime numbers from 1 to 300.
//(Hint: Use nested loops, break and continue)

#include<stdio.h>
int main()
{
    int i,n=1;

    printf("Prime numbers between 1 and 300 are\n");

    while(n<=300)
    {
        i=2;
        while(i<n)
        {
            if(n%i==0)
                break;
            else
                i++;
        }
        if(i==n)
            printf("%d\n",n);

        n++;
    }
}
