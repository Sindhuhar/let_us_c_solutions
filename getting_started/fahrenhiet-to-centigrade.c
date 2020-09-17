//Program to convert Fahrenheit degree into centigrade degree.

#include<stdio.h>
int main()
{
    int fh;
    float cg;

    printf("Enter temperature in Fahrenheit degree: \n");
    scanf("%d",&fh);

    cg=(fh-32)*5/9;

    printf("Temperature in centigrade is %f",cg);
}
