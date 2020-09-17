//program to find if a square matrix is symmetric

#include<stdio.h>
int main()
{
    int i,j,r,c,sym;
    int a[100][100],b[100][100];

    printf("Enter the numbers of rows of the matrix: \n");
    scanf("%d",&r);

    printf("Enter the number of columns of matrix: \n");
    scanf("%d",&c);

    printf("Enter the elements of the matrix: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j] != b[i][j])
                sym=1;
        }
    }
    if(sym==1)
        printf("\nSquare matrix is not a symmetric.\n");
    else
        printf("\nSquare matrix is symmetric.\n");
}
