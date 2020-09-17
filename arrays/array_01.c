//If an array arr contains n elements, then write a program to check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.

#include<stdio.h>
int main()
{
    int arr[100],n,i,f=0;

    printf("Enter total numbers of array(n): \n");
    scanf("%d",&n);

    printf("Enter number of array: \n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(i=0; i<n; i++)
    {
        if(arr[i]==arr[n-(i+1)])
        {
            f=f+1;
            printf("element number %d=%d",i,arr[i]);
        }
    }
    if(f==0)
        printf("No such elements found\n");

}
