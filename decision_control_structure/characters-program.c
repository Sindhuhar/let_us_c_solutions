//Program to determine whether the character entered is a capital letter
//a small case letter, a digit or a special symbol
//range of ASCII values for various characters.
//A-Z=65-90, a-z=97-122, 0-9=48-57, special symbols=0-47,58-64,91-96,123-127.

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the character: \n");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
        printf("The character is an uppercase letter\n");
    if(ch>=97 && ch<=122)
        printf("The character is a lowercase letter\n");
    if(ch>=48 && ch<=57)
        printf("The character is a digit\n");
    if((ch>=0 && ch<48) || (ch>57 && ch<65) || (ch>90 && ch<97) || (ch>122 && ch<128))
        printf("The character is a special symbol\n");
}
