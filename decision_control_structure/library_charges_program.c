//A library charges a fine for every book returned late. For first 5 days the fine is 50 paise.
//for 6-10 days fine is one rupee and above 10 days fine is 5 rupees.
//If you return the book after 30 days your membership will be canceled.
//Program to accept the number of days the member is late to return the book and display the fine or the appropriate message.

#include<stdio.h>
int main()
{
    int days;

    printf("Enter the number of days\n");
    scanf("%d",&days);

    if(days>=1 && days<=5)
        printf("Fine is 50 paise\n");

    if(days>=6 && days<=10)
        printf("Fine is one rupee\n");

    if(days>10 && days<=30)
        printf("Fine is 5 rupee\n");

    if(days>30)
        printf("Membership will be Canceled\n");

}
