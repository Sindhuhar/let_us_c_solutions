//Program to sort a set of names stored in an array in alphabetical order.

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][10];
    char t1[10],t2[10];
    int i,j;

    printf("Unsorted list: \n");

    for(i=0; i<10; i++)
    {
        scanf("%s",a[i]);
    }
    printf("\n");

    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[i][0]>a[j][0])
            {
                strcpy(t1,a[i]);
                strcpy(t2,a[j]);

                strcpy(a[i],t2);
                strcpy(a[j],t1);
            }
        }
    }
    printf("\nSorted list: \n");
    for(i=0; i<10; i++)
    {
        printf("\n%s\n",a[i]);
    }
}
