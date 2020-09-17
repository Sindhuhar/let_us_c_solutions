//An animal could be either a canine (dog, wolf, fox, etc.),
//a feline (cat, lynx, jaguar, etc.), a cetacean (whale, narwhal, etc.) or a marsupial (koala, wombat, etc.).
//The information whether a particular animal is canine, feline, cetacean, or marsupial
//is stored in bit number 0, 1, 2 and 3 respectively of a integer variable called type.
//Bit number 4 of the variable type stores the information about whether the animal is Carnivore or Herbivore.
//For the following animal, complete the program to determine whether the animal is a herbivore or a carnivore.
//Also determine whether the animal is a canine, feline, cetacean or a marsupial.

#include<stdio.h>
int main()
{
    struct animal
    {
        char name[30];
        int type;
    };
    struct animal a={"OCELOT",18};

    int t1,t2,typ1,typ2;

    t1=a.type>>3;
    typ1=t1&2;
    t2=t1<<3;
    typ2=t2&16;

    if(typ1==1)
        printf("\nOCELOT is canine\n");

    if(typ1==2)
        printf("\nOCELOT is Feline\n");

    if(typ1==4)
        printf("\nOCELOT is Cetacean\n");

    if(typ1==8)
        printf("\nOCELOT is Marsupial\n");

    if(typ2!= 0)
        printf("\nOCELOT is Carnivore\n");

    if(typ2==0)
        printf("\nOCELOT is Herbivore\n");
}
