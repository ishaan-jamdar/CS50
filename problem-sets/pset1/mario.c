#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // initialize variables
    int height;
    int count = 1;
    // uses do while to get a height integer within specific range
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 | height > 8);
    // uses a while loop to repeat what is inside until the height is equal to 0 meaning the pyramid is complete
    while (height > 0)
    {
        // prints a number of blank spaces up until height value, as height value decreases so do blank spaces
        for (int i = 1; i < height; i++)
        {
            printf(" ");
        }
        // prints increasing number of hashes each line, as height becomes lower and count becomes higher more hashes are printed to meet condition i2 < height
        for (int i2 = height - count; i2 < height; i2++)
        {
            printf("#");
        }
        // puts the blank space in between each row of hashes
        printf("  ");
        // prints the second half of pyramid using prior method for hashes
        for (int i2 = height - count; i2 < height; i2++)
        {
            printf("#");
        }
        // creates a new line for next layer of pyramid
        printf("\n");
        // decreases height value and increases count value to ensure previous loops output more hashes and less blank spaces
        height--;
        count++;
    }
}