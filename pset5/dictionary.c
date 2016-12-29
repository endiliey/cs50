/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "dictionary.h"

typedef struct node
{
    bool is_word;
    struct node* children[27];
}
node;

node* root;

/**
 * Recursive function to free node from bottom to top
 */
void freeing(node* children)
{
    for (int i = 0; i < 27; i++)
    {
        if (children->children[i] != NULL)
        {
            freeing(children->children[i]);
        }
    }
    
    free(children);
}

// create global variable to count size
int dictionarySize = 0;

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    int index;
    // create a pointer to first node
    node* trav = root;
    
    for (int i = 0; word[i] != '\0'; i++)
    {
        // if letter is apostrophe
        if (word[i] == '\'')
        {
            index = 26;
        }
        else
        // convert each letter to an index, e.g a is 0
        {
            index = tolower(word[i]) - 'a';
        }
        
        // traverse to next letter
        trav = trav->children[index];
        
        // if NULL, word is misspelled
        if (trav == NULL)
        {
            return false;
        }
    }
    
    // once at end of word, check if is_word is true
    if (trav->is_word == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // opening the dictionary file
    FILE* fp = fopen(dictionary, "r");
    int index;
    char word[LENGTH+1];
    
    // if cannot open file, return false
    if (fp == NULL)
    {
        return false;
    }
    
    // Creating Tries and initialize default value & pointer
    root = malloc(sizeof(node));
    root->is_word = false;
    for (int j = 0; j < 27; j++)
    {
        root->children[j] = NULL;
    }
    
    // Building of tries from dictionary with loop
    // Scan each word line by line from dictionaries
    while(fscanf(fp, "%s\n", word) != EOF)
    {
        // Create a traversal pointer from start of Tries
        node* trav = root;
        
        // For every dictionary word, iterate through trie
        for (int i = 0; word[i] != '\0'; i++)
        {
            // if letter is apostrophe
            if (word[i] == '\'')
            {
                index = 26;
            }
            else
            // convert each letter to an index, e.g a is 0
            {
                index = tolower(word[i]) - 'a';
            }
            
            if (trav->children[index] == NULL)
            {
                // if NULL, malloc new node
                node* new_node = malloc(sizeof(node));
                new_node->is_word = false;
                for (int k = 0; k < 27; k++)
                {
                    new_node->children[k] = NULL;
                }
                // and set children[index] to point at it
                trav->children[index] = new_node;
            }
            // move traversal pointer to it
            trav = trav->children[index];
        }
        // At end of word, set is_word true;
        trav->is_word = true;
        dictionarySize++;
    }
    
    // close file
    fclose(fp);
    
    // return true if successful
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    return dictionarySize;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    node* trav = root;
    freeing(trav);
    return true;
}

