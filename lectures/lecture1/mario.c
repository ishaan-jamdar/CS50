#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer from user for both width and height (can be split up, less efficient but better ui)
    int n;
    int h;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1);
    //Nested loop, outer loop creates a new row each time the width has been completed based on the height input
    for (int i = 0; i < h; i++)
    {
        int i2 = 0;
        //Inner loop prints the amount of question marks as specified by the width
        for (i2=0; i2 < n; i2++)
        {
            printf("?");
        }
        printf("\n");
    }
}
