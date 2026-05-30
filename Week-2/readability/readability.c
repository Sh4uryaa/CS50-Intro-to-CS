#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int letters = 0, sentences = 0, words, space = 0, grade;
    float L, S, index;
    string text = get_string("Text: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
            letters++;
        if (isspace(text[i]))
            space++;
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
            sentences++;
    }
    words = space + 1;
    L = ((float) letters / words) * 100;
    S = ((float) sentences / words) * 100;
    index = 0.0588 * L - 0.296 * S - 15.8;
    grade = round(index);
    if (grade < 1)
        printf("Before Grade 1\n");
    else if (grade >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %d\n", grade);
    return 0;
}
