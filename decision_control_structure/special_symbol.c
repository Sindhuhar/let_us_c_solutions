//Using conditional operators determine:
//Whether a character entered through the keyboard is a special symbol or not.

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the character\n");
    scanf("%c",&ch);

    ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123)? printf("Character entered is a Special Symbol\n"): printf("Character entered is not a Special Symbol\n"));
}

