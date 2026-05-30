#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int index, sum1 = 0, sum2 = 0;
    // input
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    // points
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    // word1 index
    for (int i = 0; i < strlen(word1); i++)
    {
        if (word1[i] >= 'a' && word1[i] <= 'z')
        {
            index = word1[i] - 'a';
        }
        else if (word1[i] >= 'A' && word1[i] <= 'Z')
        {
            index = word1[i] - 'A';
        }
        else
            continue;
        sum1 += POINTS[index];
    }

    // word2 index
    for (int i = 0; i < strlen(word2); i++)
    {
        if (word2[i] >= 'a' && word2[i] <= 'z')
        {
            index = word2[i] - 'a';
        }
        else if (word2[i] >= 'A' && word2[i] <= 'Z')
        {
            index = word2[i] - 'A';
        }
        else
            continue;
        sum2 += POINTS[index];
    }

    // final result
    if (sum1 > sum2)
        printf("Player 1 wins!\n");
    else if (sum1 < sum2)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");
    return 0;
}
