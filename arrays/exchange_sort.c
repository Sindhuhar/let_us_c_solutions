//Exchange sort

#include<stdio.h>
int main()
{
    int i,a[25],j,t;

    printf("Enter 25 numbers: \n");
    for(i=0; i<=24; i++)
        scanf("%d",&a[i]);

    for(i=0; i<=24; i++)
    {
        for(j=0; j<24-i; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted numbers are\n");
    for(i=0; i<=24; i++)
        printf("%d ",a[i]);
}
