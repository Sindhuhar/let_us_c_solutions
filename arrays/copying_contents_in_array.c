//Program to copy the contents of one array into another in the reverse order.

#include<stdio.h>
int main()
{
    int i,j,arr1[10],arr2[10];

    printf("Enter 10 elements of an array: \n");
    for(i=0; i<=9; i++)
        scanf("%d",&arr1[i]);

    for(i=0,j=9; i<=9; i++,j--)
        arr2[i]=arr1[j];

    printf("Reversed elements are\n");
        for(i=0; i<=9; i++)
            printf("%d ",arr2[i]);
}
