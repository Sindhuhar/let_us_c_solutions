//If the lengths of the sides of a triangle are denoted by a, b, and c, then area of triangle is given by
//area=sqrt(s*(s-a)*(s-b)*(s-c)) where, S = ( a + b + c ) / 2

#include<stdio.h>
#include<math.h>

float area_of_tri(int a,int b,int c,float *area);

int main()
{
    int a,b,c;
    float area;

    printf("Enter length of the sides of a triangle(a,b,c): \n");
    scanf("%d %d %d",&a,&b,&c);

    area=area_of_tri(a,b,c,&area);

    printf("Area of the triangle=%f\n",area);
}
float area_of_tri(int a,int b,int c,float *area)
{
    float s;

    s=(a+b+c)/2;
    *area=sqrt(s*(s-a)*(s-b)*(s-c));

    return( (float) *area);
}
