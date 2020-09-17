//Program which to find the grace marks for a student using switch.
//The user should enter the class obtained by the student and the number of subjects he has failed in.
//1. If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace.
//If the number of subjects he failed in is less than or equal to 3 then the grace is of 5 marks per subject.
//2.If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace.
//If the number of subjects he failed in is less than or equal to 2 then the grace is of 4 marks per subject.
//If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace.
//If the number of subjects he failed in is equal to 1 then the grace is of 5 marks per subject

#include<stdio.h>

int main()
{
    int div,sub;

    printf("Enter the class obtained by the student: ");
    scanf("%d",&div);

    printf("Enter the number of subject in which they have failed: ");
    scanf("%d",&sub);

    switch(div)
    {
        case 1:
            if(sub<=3)
                printf("He got the grace of %d marks\n",5*sub);
            else
                printf("He did not get any grace\n");
            break;

        case 2:
            if(sub<=2)
                printf("He got the grace of %d marks\n",4*sub);
            else
                printf("He did not get any grace\n");
            break;

        case 3:
            if(sub<=1)
                printf("He got the grace of %d marks\n",5*sub);
            else
                printf("He did not get any grace\n");
            break;

    }
}
