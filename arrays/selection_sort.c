//Selection sort

#include<stdio.h>
int main()
{
    int a[25],i,j,t;

    printf("Enter 25 numbers: \n");
    for(i=0; i<=24; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=23; i++)//Number of passes
    {
        for(j=i+1; j<=24; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Sorted numbers are\n");
    for(i=0; i<=24; i++)
        printf("%d ",a[i]);
}
