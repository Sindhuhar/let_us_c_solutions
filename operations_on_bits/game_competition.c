//In an inter-college competition, various sports and games are played between different colleges
//like cricket, basketball, football, hockey, lawn tennis, table tennis, carom and chess.
//The information regarding the games won by a particular college is stored in bit numbers 0, 1, 2, 3, 4, 5, 6, 7 and 8
//respectively of an integer variable called game.
//The college  that wins in 5 or more than 5 games is awarded the Champion of Champions trophy.
//If a number is entered through the keyboard,
//then write a program to find out whether the college won the Champion of the Champions trophy or not,
//along with the names of the games won by the college.

#include<stdio.h>
int main()
{
    int game;
    int i,won=0,name;

    printf("Enter number: \n");
    scanf("%d",&name);

    for(i=0; i<=8; i++)
    {
        game=i&name;

        if(game==1)
        {
            printf("Cricket\n");
            won++;
        }
        if(game==2)
        {
            printf("Basketball\n");
            won++;
        }
        if(game==3)
        {
            printf("Football\n");
            won++;
        }
        if(game==4)
        {
            printf("Hockey\n");
            won++;
        }
        if(game==5)
        {
            printf("lawn-Tennis\n");
            won++;
        }
        if(game==6)
        {
            printf("Table-Tennis\n");
            won++;
        }
        if(game==7)
        {
            printf("Carom\n");
            won++;
        }
        if(game==8)
        {
            printf("Chess\n");
            won++;
        }
    }
    if(won>=5)
    {
        printf("College has won %d games and has won the champion trophy",name);
    }
    else
    {
        printf("College has won %d games and didn't won the champion trophy",name);
    }
}
