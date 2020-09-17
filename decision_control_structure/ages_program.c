//ages of Ram,Sham and Ajay are entered.
//Program to determine the youngest of the three.

#include<stdio.h>
int main()
{
    int r,s,a;

    printf("Enter the age of Ram,Sham and Ajay\n");
    scanf("%d %d %d",&r,&s,&a);

    if(r<s && r<a)
        printf("Ram is youngest of the three\n");
    if(s<r && s<a)
        printf("Sham is youngest of the three\n");
    if(a<r && a<s)
        printf("Ajay is the youngest of the three\n");
    if(r==s && r<a)
        printf("Ram and Sham both are young\n");
    if(s==a && s<r)
        printf("Sham and Ajay both are young\n");
    if(a==r && a<s)
        printf("Ajay and Ram both are young\n");
    if(a==r && r==s)
        printf("All three have equal age\n");
}
