#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // yell if user doesn't give single command line argument
    if (argc != 2)
    {
        printf("You should provide a command line argument!");
        return 1;
    }
    
    // convert string from command line argument to integer key
    int key = atoi(argv[1]);
    
    // get user input
    string text = GetString();
    
    // encrypt message with caesar cipher
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // encryption for uppercase letter
        if (isalpha(text[i]) && isupper(text[i]))
        {
            printf("%c", ((text[i] - 'A' + key) % 26) + 'A');
        }
        // encryption for lowercase letter
        else if (isalpha(text[i]) && islower(text[i]))
        {
            printf("%c", ((text[i] - 'a' + key) % 26) + 'a');
        }
        // otherwise, just ignore it without encryption
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;
}