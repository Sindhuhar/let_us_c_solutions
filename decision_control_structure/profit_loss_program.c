//if cost price and selling price of an item is input through the keyboard.
//Program to determine whether the seller has made profit or incurred loss.
//also to find how much profit he made or loss he incurred.

#include<stdio.h>
int main()
{
    float cp,sp,p,l;

    printf("Enter cost price and selling price: \n");
    scanf("%f %f",&cp,&sp);

    p=sp-cp;
    l=cp-sp;

    if(p>0)
        printf("The seller has made profit of Rs.%f\n",p);
    if(l>0)
        printf("The seller is in loss of Rs.%f\n",l);
    if(p==0 && l==0)
        printf("There is no loss, no profit");
}
