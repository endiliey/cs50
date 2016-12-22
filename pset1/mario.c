#include <stdio.h>
#include <cs50.h>

int main()
{
    // Prompt user for half-pyramid's height (non-negative and no greater than 23)
    int height;
    do
    {
        printf("height: ");
        height = GetInt();
    } 
    while (height < 0 || height > 23);
    
    // Generate and draw the half-pyramid
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}