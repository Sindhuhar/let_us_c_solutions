#include<stdio.h>
int main()
{
    int res,num,a=1,n=20;

    printf("Enter the number\n");
    scanf("%d",&num);

    while(a<=n)
    {
        res=a*num;
        printf("%d*%d=%d\n",num,a,res);
        a++;
    }
}
