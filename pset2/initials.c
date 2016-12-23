#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    // get input from user and store length to a variable
    string name = GetString();
    int length = strlen(name);
    
    // create initials and assign first letter as first initial
    char initials[length];
    initials[0] = toupper(name[0]);
    
    // if there is a space, next character added to initials
    for (int i = 1, j = 1; i < length; i++)
    {
        if (name[i - 1] == ' ')
        {
            initials[j] = toupper(name[i]);
            j++;
        }
    }
    printf("%s\n", initials);
}