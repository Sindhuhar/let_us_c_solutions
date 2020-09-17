//Twenty-five numbers are entered from the keyboard into an array.
//Program to find out how many of them are positive, how many are negative, how many are even and how many odd.

#include<stdio.h>
int main()
{
    int i,arr[25],neg=0,pos=0,odd=0,even=0;

    printf("Enter 25 numbers\n");

    for(i=0; i<25; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<25; i++)
    {
        arr[i]<0?neg++:(pos++);
        arr[i]%2?odd++:(even++);
    }
    printf("Negative elements=%d\n",neg);
    printf("positive elements=%d\n",pos);
    printf("even elements=%d\n",even);
    printf("odd elements=%d\n",odd);
}
