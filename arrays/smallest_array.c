//Find the smallest number in an array using pointers.

#include<stdio.h>
int main()
{
    int i,n,*p,*s,a[100];

    printf("Enter how many number want to save in array: \n");
    scanf("%d",&n);

    printf("Enter %d numbers in array\n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray entered: \n");
    for(i=0; i<n; i++)
        printf("%2d ",a[i]);
    printf("\n\n");

    p=&a[0];  //first pointer points 0th element
    for(i=0; i<n; i++)
    {
        s=&a[i];  //second pointer points every element one by one

        if(*p>*s)  //if first is bigger than second
            *p=*s;  //first becomes second
            s++;  //second is incremented to check with other elements
    }
    printf("Smallest digit in array is %d\n",*p);
}
