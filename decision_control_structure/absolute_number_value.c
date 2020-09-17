#include<stdio.h>
int main()
{
    int num,absnum;

    printf("Enter the number: \n");
    scanf("%d", &num);

    if(num<0)
    {
        absnum=(-1)*num;
        printf("The absolute value of %d is %d\n",num,absnum);
    }
    else
    {
        absnum=num;
        printf("The absolute value of %d is %d\n",num,absnum);
    }
}
