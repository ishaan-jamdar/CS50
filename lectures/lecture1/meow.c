#include <cs50.h>
#include <stdio.h>

//Prototype
void meow(int n);

int main(void)
{
    int n = get_int("how many meows?: ");
    meow(n);
}

void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("meow\n"); 
    }
}
