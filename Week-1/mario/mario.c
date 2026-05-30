#include <stdio.h>
int main (void)
{
    int n;
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    } while ( n < 0 || n > 15);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i-1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i+1; j++)
        {
            printf("%d", j);
        }
        printf(" ");
        for (int j = i+1; j >= 1; j--)
        {
            printf("%d", j);
        }
    printf("\n");
    }

    return 0;
}