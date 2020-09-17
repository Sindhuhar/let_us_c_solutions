//The time field in the directory entry is 2 bytes long.
//Write a function which would receive the two-byte time entry and return to the calling function, the hours, minutes and seconds.

#include<stdio.h>
int main()
{
    unsigned hr,mn,sc,input;
    void timer();

    printf("Enter the time entry: ");
    scanf("%d",&input);

    timer(input, &hr, &mn, &sc);
    printf("\nTIME: %u: %u: %u\n",*(&hr),*(&mn),*(&sc));
}
void timer(unsigned time, unsigned *hr, unsigned *mn, unsigned *sc)
{
    *hr=time>>11;
    *mn=(time<<5)>>10;
    *sc=(time<<11)>>11;
}
