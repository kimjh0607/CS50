#include <stdio.h>
#include <cs50.h>

void get_column(int height);

int main(void)
{
    int h = get_int("Height : ");
    get_column(h);
}

void get_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}
