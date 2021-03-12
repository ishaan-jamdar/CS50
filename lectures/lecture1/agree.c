#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask user if they agree
    char c = get_char("Do you agree? ");
    // if y representing yes was entered return the user's answer
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
     // if n representing no was entered return the user's answer
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}
