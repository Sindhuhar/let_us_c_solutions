//Program to generate all combinations of 1, 2 and 3 using for loop.

#include<stdio.h>
int main()
{
    int i=1,j=1,k=1;

    printf("Combinations of 1,2 and 3 are\n");

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
                printf("%d %d %d\n",i,j,k);
        }
    }
}
