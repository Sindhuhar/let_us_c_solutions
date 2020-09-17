//The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known.
//Area = (1 / 2 ) ab sin ( angle )
//Given the following 6 triangular pieces of land,
//program to find their area and determine which is largest,
//Plot No.  a       b     angle
//  1     137.4   80.9    0.78
//  2     155.2   92.62   0.89
//  3     149.3   97.93   1.35
//  4     160.0   100.25  9.00
//  5     155.6   68.95   1.25
//  6     149.7   120.0   1.75

#include<stdio.h>
#include<math.h>
int main()
{
    float a[6][3]={{137.4,80.9,0.78},
                   {155.2,92.62,0.89},
                   {149.3,97.93,1.35},
                   {160.0,100.25,9.00},
                   {155.6,68.95,1.25},
                   {149.7,120.0,1.75}};

    float big=0, area;
    int sr=0,i;

    for(i=0; i<6; i++)
    {
        area=(1.0/2.0)*a[i][0]*a[i][1]*sin(a[i][2]);

        if(area>big)
        {
            big=area;
            sr=i;
        }
    }
    printf("\nplot number %d is the biggest.\n",sr);
    printf("Area of plot number %d = %f\n",sr,big);

}
