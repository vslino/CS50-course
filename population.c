#include <cs50.h>
#include <stdio.h>

// Population growth
int main(void)
{
    //Initial population, at least nine people
    int initial;
    do
    {
        initial = get_int("Start population: ");
    }
    while (initial < 9);

    //Final population, equal or greater than initial
    int final;
    do
    {
        final = get_int("End population: ");
    }
    while (final < initial);

    //years counter
    int years = 0;

    //Population rate growth
    while (initial < final)
    {
        initial = initial + (initial / 3) - (initial / 4);
        years++;
    }

    //Print how many years will be take
    printf("Will be take %i years.\n", years);

}