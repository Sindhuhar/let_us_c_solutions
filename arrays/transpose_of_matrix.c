//Program to obtain transpose of a 4 x 4 matrix.
//The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column.

#include<stdio.h>
int main()
{
    int i,j,temp,a[4][4];

    printf("Enter the 4*4 matrix: \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Original Matrix: \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("\nTranspose of a matrix: \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
