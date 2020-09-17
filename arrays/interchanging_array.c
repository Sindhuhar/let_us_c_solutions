//Program that interchanges the odd and even components of an array.

#include<stdio.h>
int main()
{
    int i,j,a[6],even,temp;

    printf("Enter the numbers: \n");
    for(i=0; i<6; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array without exchanging even and odd numbers: \n");
    for(i=0; i<6; i++)
    {
        printf("%2d",a[i]);
    }
    printf("\nArray after exchanging even and odd number: \n");
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if((a[i]%2!=0 && a[j]%2==0))
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0; i<6; i++)
    {
        printf("%2d",a[i]);
    }
}
