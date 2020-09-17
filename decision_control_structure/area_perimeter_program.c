//Program to find whether the area of the rectangle is greater than it's perimeter.
//ex: The area of the rectangle with length=5 and breadth=4 is greater than it's perimeter.

#include<stdio.h>
int main()
{
    int pm,l,b,a;

    printf("Enter the length and breadth of the rectangle: \n");
    scanf("%d %d",&l,&b);

    a=l*b;
    pm=2*(l+b);

    printf("The area of rectangle is %d\n",a);
    printf("The perimeter of the rectangle is %d\n",pm);

    if(a>pm)
        printf("The area of the rectangle with length=%d and breadth=%d is greater than it's perimeter\n",l,b);
    else
        printf("The area of the rectangle with length=%d and breadth=%d is less than it's perimeter\n",l,b);

}
