//Write a general-purpose function to convert any given year into its roman equivalent.
//The following table shows the roman equivalents of decimal numbers:
//1-i,5-v,10-x,50-l,100-c,500-d,1000-m
//Example:
//Roman equivalent of 1988 is mdcccclxxxviii
//Roman equivalent of 1525 is mdxxv

#include<stdio.h>
int romanise(int y, int k, char ch);

int main()
{
    int year;

    printf("Enter the year: \n");
    scanf("%d",&year);

    year=romanise(year,1000,'m');
    year=romanise(year,500,'d');
    year=romanise(year,100,'c');
    year=romanise(year,50,'l');
    year=romanise(year,10,'x');
    year=romanise(year,5,'v');
    year=romanise(year,1,'i');
}
int romanise(int y, int k, char ch)
{
    int j,i;

    j=y/k;

    for(i=1; i<=j; i++)
        printf("%c",ch);

    return(y%k);
}
