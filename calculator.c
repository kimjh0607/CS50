#include <cs50.h>
#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    int z = add(x,y);
    printf("x + y = %i\n", z);
    //printf("x + y = %i\n", add(x,y));
}

int add(int a, int b)
{
    return a + b;
}
