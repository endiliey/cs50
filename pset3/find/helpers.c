/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int left = 0;
    int right = n - 1;
    int middle;
    // Binary search algorithm
    while (left <= right)
    {
        // set middle index
        middle = left + (right - left) / 2;
        // if middle value equal value searched, return true
        if (values[middle] == value)
        {
            return true;
        }
        // if middle value more than value searched , search on left part
        else if (values[middle] > value)
        {
            right = middle - 1;
        }
        // if middle value more than value searched, search on right part
        else
        {
            left = middle + 1;
        }
        
    }
    // if value is never found, return false
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int min;
    int temp;
    // Implement a selection sort algorithm O(n^2)
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j ;
            }
        }
        temp = values[i];
        values[i] = values[min];
        values[min] = temp;
    }
    return;
}