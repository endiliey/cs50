#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// prototype for caesar function
char caesar(char character, int key);

int main(int argc, string argv[])
{
    // yell if user doesn't give valid number of command line args
    if (argc != 2)
    {
        printf("You should provide a command line argument!\n");
        return 1;
    }
    
    int keylength = strlen(argv[1]);
    // yell if user doesn't give valid keyword
    for (int k = 0; k < keylength; k++)
    {
        if (!isalpha(argv[1][k]))
        {
            printf("You should provide valid keyword!\n");
            return 1;
        }
    }
    
    // get text from user and find the length
    string text = GetString();
    int textlength = strlen(text);
    
    // encrypt message with vigenere cipher
    int key[textlength];
    for (int i = 0, j = 0; i < textlength; i++)
    {
       // if it's a valid alphabetical character, we can caesar it
        if (isalpha(text[i]))
        {
            key[i] = tolower(argv[1][j % keylength]) - 'a';
            j++;
            printf("%c", caesar(text[i], key[i]));
        }
        // otherwise, it will simply output it without ciphering it
        else
        {
            printf("%c", text[i]); 
        }
    }
    printf("\n");
    return 0;
}

/* 
    This function implement case sensitive caesar cipher to the input character
    It will return a character back to the callee
    Note that it assumes that the character is a valid alphabetical character
*/
char caesar(char character, int key)
{
    // encryption for uppercase letter
    if (isupper(character))
    {
        return ((character - 'A' + key) % 26) + 'A';    
    }
    // encryption for lowercase letter
    else
    {
        return ((character - 'a' + key) % 26) + 'a';
    }
}