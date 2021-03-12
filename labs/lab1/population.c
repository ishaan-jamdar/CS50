#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Initializes variables
    int start;
    int end;
    int years = 0;
    // Prompts user for start size
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    // Prompts user for end size
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // Calculates the number of years until we end is reached by caclulating yearly and adding a count to years
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years ++;
    }
    // Prints the number of years
    printf("Years: %i\n", years);
}
