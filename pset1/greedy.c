#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    // Prompt user for valid input (amount of change owed) and convert it to number of cents
    float amount;
    do
    {
        printf("O hai! How much change is owed?\n");
        amount = GetFloat();
    } 
    while (amount < 0);
    
    // Finding minimum number of coins needed by decreasing it with each possible largest coin value
    int number_of_coins = 0;
    int cents = (int) round(amount * 100);
    
    number_of_coins += cents / 25;
    cents %= 25;

    number_of_coins += cents / 10;
    cents %= 10;

    number_of_coins += cents / 5;
    cents %= 5;

    number_of_coins += cents;
    
    printf("%d\n", number_of_coins);
}