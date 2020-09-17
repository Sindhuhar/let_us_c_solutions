//Program to find out what is the day on 1st January of the entered year.

#include<stdio.h>
int main()
{
    int leapdays,firstday,y;
    long int totaldays,normaldays;

    printf("Enter the year: \n");
    scanf("%d",&y);

    normaldays=(y-1*365);
    leapdays=(y-1)/4-(y-1)/100+(y-1)/400;
    totaldays=normaldays+leapdays;
    firstday=totaldays%7;

    if(firstday==0)
        printf("Monday\n");
    if(firstday==1)
        printf("Tuesday\n");
    if(firstday==2)
        printf("Wednesday\n");
    if(firstday==3)
        printf("Thursday\n");
    if(firstday==4)
        printf("Friday\n");
    if(firstday==5)
        printf("Saturday\n");
    if(firstday==6)
        printf("Sunday\n");
}
