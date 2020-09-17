//In a town, the percentage of men is 52.The percentage of total literacy is 48.
//if total percentage of literate men is 35 of total population.
//Program to find the total number of illiterate men and women if the population of the town is 80000.

#include<stdio.h>
int main()
{
    int tp=80000,pm,pw,tl,ml,wl,im,iw;

    pm=52*tp/100;
    pw=tp-pm;
    tl=48*tp/100;
    ml=35*tp/100;
    wl=tl-ml;
    im=pm-ml;
    iw=pw-wl;

    printf("Total population=%d\n",tp);
    printf("Mens population=%d\nWomens population=%d\nTotal literacy=%d\nMen literacy=%d\nWomen literacy=%d\n\n",pm,pw,tl,ml,wl);
    printf("Illiterate mens=%d\nIlliterate womens=%d\n",im,iw);



}
