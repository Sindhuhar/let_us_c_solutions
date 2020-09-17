//program to check whether the triangle is valid or not.
//The triangle is valid if the sum of two sides is greater than the largest of the three sides.

#include<stdio.h>
int main()
{
    int s1,s2,s3;

    printf("Enter the three sides of the triangle\n");
    scanf("%d %d %d",&s1,&s2,&s3);

    if((s1+s2)>s3 &&  (s2+s3)>s1 &&  (s2+s3)>s1)
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");
}
