// program to enter the numbers till the user wants and at the end
//it should display the count of positive, negative and zeros entered.

#include<stdio.h>
int main()
{
    int num,positive=0,negative=0,zero=0;
    char choice;

    do
    {
        printf("Enter the number: \n");
        scanf("%d",&num);

        if(num>0)
            positive++;
        else if (num<0)
            negative++;
        else
        {
            zero++;
        }
        printf("Do you want to continue (y/n): \n");
        choice=getch();
    }while(choice=='y');

    printf("Positive numbers=%d\tNegative numbers=%d\tZero numbers=%d\t",positive,negative,zero);

}
