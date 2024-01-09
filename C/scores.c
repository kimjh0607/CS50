#include <stdio.h>
#include <cs50.h>

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);

int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Scores: ");
    }
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // Print average
    printf("Average: %f\n", average(N, scores));
    // printf("Average: %.2f\n", (score1+score2+score3) / 3.0);
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
