//Program  to find the norm of a matrix.
//The norm is defined as the square root of the sum of squares of all elements in the matrix.

#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,r,c,a[100][100];
    float norm=0,sum=0;

    printf("Enter the number of rows: \n");
    scanf("%d",&r);

    printf("Enter the  number of columns: \n");
    scanf("%d",&c);

    printf("Enter elements of %d*%d array\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum=sum+(a[i][j]*a[i][j]);
        }
    }
    norm=sqrt(sum);
    printf("Norm of Matrix = %f",norm);

}
