    #include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int only_digits(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage : ./caesar key");
        return 1;
    }
    if (!only_digits(argv[1]))
    {
        printf("Usage : ./caesar key");
        return 1;
    }
    string plaintext = get_string("Plaintext:  ");
    char ciphertext[strlen(plaintext) + 1];
    int key = atoi(argv[1]);
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
                ciphertext[i] = (plaintext[i] - 'A' + key) % 26 + 'A';
            else if (islower(plaintext[i]))
                ciphertext[i] = (plaintext[i] - 'a' + key) % 26 + 'a';
        }
        else
            ciphertext[i] = plaintext[i];
    }
    ciphertext[strlen(plaintext)] = '\0';
    printf("ciphertext: %s\n", ciphertext);
}
