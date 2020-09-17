#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=1000; i++)
    {
        if(i%2==0)
            printf("%c",3);
        if(i%2!=0)
            printf("%c",4);
    }
}
