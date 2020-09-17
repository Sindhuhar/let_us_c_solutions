//Program to calculate the area and perimeter of the Rectangle.
//and area and circumference of the circle.

#include<stdio.h>
int main()
{
    int l,b,r;
    float pm,ar,ac,cf;

    printf("Enter length and breadth of the Rectangle: \n");
    scanf("%d %d",&l,&b);

    printf("Enter radius of the Circle: \n");
    scanf("%d",&r);

    pm=2*(l+b);
    ar=l*b;
    ac=3.14*r*r;
    cf=2*3.14*r;

    printf("Perimeter of Rectangle=%f\nArea of Rectangle=%f\n",pm,ar);
    printf("Area of Circle=%f\nCircumference of Circle=%f\n",ac,cf);
}
