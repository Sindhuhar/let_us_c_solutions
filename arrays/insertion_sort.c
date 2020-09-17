//insertion sort

#include<stdio.h>
int main()
{
    int a[10],i,j,k,t;

     printf("Enter the numbers: \n");
    for(i=0; i<=9; i++)
        scanf("%d",&a[i]);

    for(i=0; i<=9; i++)
    {
        t=a[i];
        for(j=0; j<i; j++)
        {
            if(t<a[j])
            {
                for(k=i; k>=j; k--)
                a[k]=a[k-1];
                a[j]=t;
                break;
            }
        }
    }
    printf("Sorted numbers are\n");
    for(i=0; i<=9; i++)
        printf("%d ",a[i]);
}


