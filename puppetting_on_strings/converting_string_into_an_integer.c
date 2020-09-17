//Program that converts a string like "124" to an integer 124.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;

    printf("Enter the string: \n");
    gets(str);

    i=atoi(str);  //"atoi" is a function to convert a string into an integer.

    printf("integer=%d",i);
    getch();
}
