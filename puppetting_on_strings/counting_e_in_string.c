//Program to count the number of e in the following array of pointer to strings

#include<stdio.h>
int main()
{
    static char *s[]={
                        "we will teach you",
                        "move a mountain",
                        "Level a building",
                        "erase the past",
                        "Make a million",
                        "All though c!"
                     };
    char *p;
    int i, count=0;

    for(i=0; i<6; i++)
    {
        p=s[i];
        while(*p)
        {
            printf("%c",*p);
            if(*p=='e')
                count++;
            p++;
        }
        printf("\n");
    }
    printf("Total number of e = %d",count);
}
