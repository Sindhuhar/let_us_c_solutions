//Twenty-five numbers are entered from the keyboard into an array.
//The number to be searched is entered through the keyboard by the user.
//Program to find if the number to be searched is present in the array and if it is present,
//display  the number of times it appears in the array.

#include<stdio.h>
int main()
{
    int i,arr[25],prsnt=0,num;

    printf("Enter 25 numbers: \n");

    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched: \n");
    scanf("%d",&num);

    for(i=0;i<25;i++)
    {
        if(num==arr[i])
            prsnt=prsnt+1;
    }
    if(prsnt==0)
        printf("Number does not present in the array\n");
    else
    {
        printf("Number present in the array\n");
        printf("Number of times it appears=%d\n",prsnt);
    }
}
