//Given three variables x, y, z write a function to circularly shift their values to right.
//In other words if x = 5, y = 8, z = 10 after circular shift y = 5, z = 8, x =10
//after circular shift y = 5, z = 8 and x = 10.
//Call the function with variables a, b, c to circularly shift values.

#include<stdio.h>
void cirsh(int *x, int *y, int *z);

int main()
{
    int d,e,f;

    printf("Enter the three values(x,y,z): ");
    scanf("%d %d %d",&d,&e,&f);

    cirsh(&d,&e,&f);

    printf("The shifted values are x=%d,y=%d,z=%d\n",d,e,f);
}
void cirsh(int *x, int *y, int *z)
{
    int a,b,c;
    a=*z;
    b=*x;
    c=*y;
    *x=a;
    *y=b;
    *z=c;
}
