#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //string s  = "HI!";
    // printf("%s\n", s);
    //printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // 72 73 33 0
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";

    // printf("%s\n", words[1]);
    // printf("%s\n", words[2]);

    printf("%c%c%c\n", words[0][0],words[0][1],words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}
