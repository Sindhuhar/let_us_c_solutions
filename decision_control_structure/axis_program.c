//Program to find out if point (x,y) lies on the x-axis,y-axis or at the origin.

#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the points x and y: \n");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0)
        printf("points lies on origin\n");
    else if(x==0)
        printf("points lies on x-axis\n");
    else if(y==0)
        printf("points lies on y-axis\n");
    else
        printf("x=%d, y=%d",x,y);
}
