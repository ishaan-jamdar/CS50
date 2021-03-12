#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two numbers from user
    float x = get_float("x: ");
    float y = get_float("y: ");
    
    printf("%.50f\n", x / y);
}
