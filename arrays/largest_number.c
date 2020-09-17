//Program to pick up the largest number from any 5 row by 5 column matrix.

#include<stdio.h>
int main()
{
    int a[5][5];
    int i,j,big;

    printf("Enter 5*5 matrix: \n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    big=a[0][0];

    printf("The 5*5 matrix is: \n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d\t",a[i][j]);

            if(a[i][j]>big)
                big=a[i][j];
        }
        printf("\n");
    }
    printf("Largest number in the matrix is %d",big);
}
