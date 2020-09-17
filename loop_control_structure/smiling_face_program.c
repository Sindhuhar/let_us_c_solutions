//program to fill the entire screen with a smiling face.
//The smiling face has an ASCII value 1.

#include<stdio.h>
int main()
{
    int r,c;

    for(r=0; r<=25; r++)
    {
        for(c=0; c<=80; c++)
            printf("%c",1);
    }
}
