//Program which performs the following tasks:
// 1. initialize an integer array of 10 elements in main( )
//2. pass the entire array to a function modify( )
//3. in modify( ) multiply each element of array by 3
//4. return the control to main( ) and print the new array elements in main( )

#include<stdio.h>
void modify( int *arr,int n);
int main()
{
    int i;
    static int array[]={1,2,3,4,5,6,7,8,9,10};

    printf("Original array is: \n");

    for(i=0; i<10; i++)
        printf("%d ",array[i]);

    modify(array,10);

    printf("\nModified array is: \n");
    for(i=0; i<10; i++)
        printf("%d ",array[i]);
}
void modify( int *arr,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        *arr=*arr*3;
        arr++;
    }
}
