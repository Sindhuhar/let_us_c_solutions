//program to add two 6 x 6 matrices.

#include<stdio.h>
int main()
{
    int a1[6][6],a2[6][6],a3[6][6],i,j;

    printf("Enter values for first 6*6 Matrix: \n");
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
            scanf("%d",&a1[i][j]);
    }
    printf("Enter values for second 6*6 Matrix: \n");
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
            scanf("%d",&a2[i][j]);
    }
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
            a3[i][j]=a1[i][j]+a2[i][j];
    }
    printf("Resultant Matrix: \n");
    for(i=0; i<=5; i++)
    {
        for(j=0; j<=5; j++)
        {
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }

}
