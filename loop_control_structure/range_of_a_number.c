//program to find the range of a set of numbers.
//Range is the difference between the smallest and biggest number in the list.

#include<stdio.h>
int main()
{
    int num,max=-32768,min=32767,range;
    char choice='y';

    while(choice=='y')
    {
        printf("Enter the number\n");
        scanf("%d",&num);

        if(num>max)
            max=num;
        if(num<min)
            min=num;

        printf("You want to add another number(y/n)");
        fflush(stdin);
        scanf("%c",&choice);
    }
    range=max-min;
    printf("Range is %d\n",range);
}
