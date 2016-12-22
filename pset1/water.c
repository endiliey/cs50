#include <stdio.h>
#include <cs50.h>

int main()
{
    // Prompt user for an integer (length of shower in minutes)
    printf("minutes: ");
    int minutes = GetInt();
    
    // Calculate equivalent number of bottles and print it
    int bottles = minutes * 12;
    printf("bottles: %d\n", bottles);
}