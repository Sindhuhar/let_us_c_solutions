//the distance between two cities(in km)
//Program to convert and print this distance in meters,feet,inches,centimeters.

#include<stdio.h>
int main()
{
    int dis;
    float met,feet,inches,cm;

    printf("Enter Distance between two cities: \n");
    scanf("%d",&dis);

    met=dis*1000;
    feet=dis*3280.84;
    inches=dis*39370.079;
    cm=dis*100000;

    printf("Distance in kilometer is %d\n",dis);
    printf("Distance in meter is %f\n",met);
    printf("Distance in feet is %f\n",feet);
    printf("Distance in inches is %f\n",inches);
    printf("Distance in centimeter is %f\n",cm);

}
