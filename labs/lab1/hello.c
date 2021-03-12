#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask for users name
    string answer = get_string("What's your name? ");
    //Greets user by name
    printf("hello, %s\n", answer);
}
