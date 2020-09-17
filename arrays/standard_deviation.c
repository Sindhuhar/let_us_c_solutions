//For the following set of sample data, compute the standard deviation and the mean.
//-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2

#include<stdio.h>
#include<math.h>

int main()
{
    int a[15]={-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int i,j;
    float temp,sd,sum=0,mean,x;

    printf("\ndata set: \n");
    for(i=0; i<15; i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    for(i=0; i<15; i++)
    {
        sum=sum+a[i];
    }
    mean=sum/15;
    for(i=0; i<15; i++)
    {
        a[i]=pow((a[i]-mean),2);
        x=x+a[i];
    }
    temp=x/15;
    sd=sqrt(temp);
    printf("\nMean=%f\nStandard deviation=%f\n",mean,sd);
}
