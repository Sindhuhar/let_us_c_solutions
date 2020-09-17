//Write down a function getint( ), which would receive a numeric string from the keyboard,
//convert it to an integer number and return the integer to the calling function.

#include<stdio.h>
void main()
{
    int a;
    char s[80];

    printf("Enter any numeric string: ");
    gets(s);

    a=getint(s);  //converting and receiving string as integer.
    printf("\nYou entered=%d\n",a);
    getch();
}
int getint(char s1[80])
{
    int digit;
    digit = atoi(s1); //converting string to integer.
    return (digit);
}
