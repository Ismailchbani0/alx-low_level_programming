#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which src will be appended
 * @src: The source string to append to dest
 * 
 * Return: A pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i;

    // Calculate the length of dest
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append the characters from src to dest
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    // Null-terminate the resulting string
    dest[dest_len + i] = '\0';

    return dest;
}

