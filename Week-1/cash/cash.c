#include <stdio.h>
int main (void)
{
    int answer,sum = 0;
    do
    {
        printf("Enter the amount of change owed (in cents): ");
        scanf("%d", &answer);
    }
    while (answer > 1000 || answer < 0);
    int quarter = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    while (answer > 0)
    {
    if (answer >= quarter)
    {
        sum++;
        answer -= quarter;
    }
    else if (answer >= dimes)
    {
        sum++;
        answer -= dimes;
    }
    else if (answer >= nickels)
    {
        sum++;
        answer -=nickels;
    }
    else if (answer >=pennies)
    {
        sum++;
        answer -= pennies;
    }
    }   
    printf("%d", sum);
    return 0;


}