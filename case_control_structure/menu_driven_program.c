//Menu driven program which has following options:
//1. Factorial of a number.
//2. Prime or not
//3. Odd or even
//4. Exit
//Make use of switch statement.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,num,i;
    unsigned long int fact;

    while(1)
    {
        printf("\n1.Factorial\n");
        printf("2.Prime\n");
        printf("3.Odd or even\n");
        printf("4.exit\n");

        printf("\nYour choice?\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter the number\n");
                scanf("%d",&num);

                fact=1;

                for(i=1; i<=num; i++)
                    fact=fact*i;

                printf("Factorial value=%lu\n",fact);
                break;

            case 2:
                printf("\nEnter the number\n");
                scanf("%d",&num);

                for(i=2; i<=num; i++)
                {
                    if(num%i==0)
                    {
                        printf("Not a prime number\n");
                        break;
                    }
                }
                if(i==num)
                    printf("Prime number\n");
                break;

            case 3:
                printf("\nEnter the number\n");
                scanf("%d",&num);

                if(num%2==0)
                    printf("Even number\n");
                else
                    printf("Odd number\n");
                break;

            case 4:
                exit(0);

        }
    }
}
