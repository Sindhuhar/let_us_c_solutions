//An Insurance company follows following rules to calculate premium.
//(1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male
//then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 200000.
//(2) If a person satisfies all the above conditions except that the sex is female
//then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 100000.
//(3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male

//then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
//(4) In all other cases the person is not insured.
//program to output whether the person should be insured or not, his/her premium rate and maximum amount for which
// he/she can be insured.


#include<stdio.h>
int main()
{
    int age,pr;
    char health,resident,sex;

    printf("Enter the age: \n");
    scanf("%d",&age);
    fflush(stdin);

    printf("Enter the health(e/p): \n");
    scanf("%c",&health);
    fflush(stdin);

    printf("Enter the sex(m/f): \n");
    scanf("%c",&sex);
    fflush(stdin);

    printf("Enter the Resident(c/v): \n");
    scanf("%c",&resident);

    if(health=='e' && resident=='c' && sex=='m' && (age>=25 && age<=35))
    {
        printf("Person is insured\n");
        printf("The premium rate is Rs.4 per thousand\n");
        printf("Maximum insurance amount = Rs.200000");
    }

    else if(health=='e' && resident=='c' && sex=='f' && (age>=25 && age<=35))
    {
        printf("Person is insured\n");
        printf("The premium rate is Rs.3 per thousand\n");
        printf("Maximum insurance amount = Rs.100000");
    }

    else if(health=='p' && resident=='v' && sex=='m' && (age>=25 && age<=35))
    {
        printf("Person is insured\n");
        printf("The premium rate is Rs.6 per thousand\n");
        printf("Maximum insurance amount = Rs.10000");
    }
    else
        printf("The person is not insured\n");

}
