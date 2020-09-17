//Program to delete all vowels from a sentence.
//Assume that the sentence is not more than 80 characters long.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    int i=0;

    printf("Enter the string\n");
    gets(s);
    while(s[i] != '\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )

            putch(' ');

        else

            putch(s[i]);
        i++;
    }
}
