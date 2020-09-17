//The three angles of the triangle is entered through the key board.
//Program to check whether the triangle is valid or not.
//A triangle is valid if the sum of all the three angles is equal to 180 degree.

#include<stdio.h>
int main()
{
    int a1,a2,a3,ta;

    printf("Enter the three angles of the triangle\n");
    scanf("%d %d %d",&a1,&a2,&a3);

    ta=a1+a2+a3; //Total angle.

    if(ta==180)
        printf("valid Triangle\n");
    else
        printf("invalid Triangle\n");
}
