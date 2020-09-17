//Using conditional operators determine:
// Whether the character entered through the keyboard is a lower case alphabet or not.

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the character\n");
    scanf("%c",&ch);

    (ch>=97 && ch<=122? printf("Character entered is a lowercase alphabet\n"): printf("Character entered is not a lowercase alphabet\n"));
}
