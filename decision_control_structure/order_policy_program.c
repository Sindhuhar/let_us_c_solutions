//The policy followed by a company to process customer orders is given by the following rules:
//(a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
//(b) If has credit is not OK do not supply. Send him intimation.
//(c) If has credit is OK but the item in stock is less than has order, supply what is in stock.
//Intimate to him data the balance will be shipped.
//Program to implement the company policy.

#include<stdio.h>
int main()
{
    int order,stock=1000;
    char credit;

    printf("Enter the customer order: \n");
    scanf("%d",&order);

    printf("Is his credit is OK? (y/n)\n");
    credit=getch();

    if(order<=stock && credit=='y')
        printf("We supplied your requirement \t Quantity: %d",order);
    else if(order>stock && credit=='y')
        printf("We supplied %d products and balance will be shipped later\n",stock);
    else
        printf("Please first clear your credit,until we can't supply you any more\n");
}
