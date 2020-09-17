#include<stdio.h>

int main()
{
    struct dates
    {
        int date;
        int month;
        int year;
    }d1;

    int d,m,y,i;

    printf("Enter the date to save in the structure: \n");

    printf("Enter the date: \n");
    scanf("%d",&d1.date);

    printf("Enter the month: \n");
    scanf("%d",&d1.month);

    printf("Enter the year: \n");
    scanf("%d",&d1.year);

    printf("Enter the date to compare with structure: \n");

    printf("Enter the date: \n");
    scanf("%d",&d);

    printf("Enter the month: \n");
    scanf("%d",&m);

    printf("Enter the year: \n");
    scanf("%d",&y);

    if(d==d1.date && m==d1.month && y==d1.year)
    {
        printf("Dates are equal\n");
    }
    else
    {
        printf("Dates are not equal\n");
    }
}
