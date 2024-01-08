#include <stdio.h>

void meow(int num); //

int main(void)
{
    meow(10);
}

void meow(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("meow\n");
    }
}
