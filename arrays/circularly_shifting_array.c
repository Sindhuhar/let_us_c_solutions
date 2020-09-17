//Given an array p[5], write a function to shift it circularly left by two positions.
//Thus, if p[0] = 15, p[1]= 30, p[2] = 28, p[3]= 19 and p[4] = 61
//then after the shift p[0] = 28, p[1] = 19, p[2] = 61, p[3] = 15 and p[4] = 30.
//Call this function for a (4 x 5 ) matrix and get its rows left shifted.

#include<stdio.h>

int func(int q[5]);

int main()
{
    int i,j,p[]={15,30,28,19,61};
    int a[4][5];

    printf("Array before shift: \n");
    for(i=0; i<5; i++)
    {
        printf("%2d ",p[i]);
    }
    func(p);
    printf("\nArray after shift: \n");
    for(i=0; i<5; i++)
    {
        printf("%2d ",p[i]);
    }
    printf("\nEnter the elements of 4*5 matrix: \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("Matrix entered before shift: \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter shift: \n");
    for(i=0; i<4; i++)
    {
        func(a[i]);
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
            {
                printf("%2d ",a[i][j]);
            }
            printf("\n");
    }

}
int func(int q[5])
{
    int a,t1,t2;
    t1=q[0];
    t2=q[1];

    q[0]=q[2];
    q[1]=q[3];
    q[2]=q[4];
    q[3]=t1;
    q[4]=t2;

    return (q[5]);

}
