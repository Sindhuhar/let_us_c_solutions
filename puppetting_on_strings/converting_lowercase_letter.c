//Program that converts all lowercase characters in a given string to its equivalent uppercase character.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Enter the string\n");
    gets(str);

    strupr(str);
    printf("\ngiven string to its equivalent uppercase character is\n");
    puts(str);
    getch();
}
