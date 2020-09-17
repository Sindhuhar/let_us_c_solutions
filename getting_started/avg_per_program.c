//the marks obtained by the student in five different subjects
//program to calculate the average and percentage of the marks obtained by the student.
//assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float avg,per,sum;

    printf("Enter five subjects marks: \n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    sum=m1+m2+m3+m4+m5;
    avg=sum/5;
    per=sum/500*100;

    printf("Average=%f\nPercentage=%f\n",avg,per);
}
