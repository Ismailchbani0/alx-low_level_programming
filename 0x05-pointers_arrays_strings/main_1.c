#include "main.h"
#include <stdio.h>
#include <ctype.h> // Include the ctype library for isprint function

int main(void)
{
    char str[] = "Lorem ipsum..."; // Your input string
    char sanitized_str[1024]; // Assuming a maximum length of 1024

    // Initialize the sanitized string
    for (int i = 0; i < sizeof(sanitized_str); i++) {
        sanitized_str[i] = '\0';
    }

    // Copy only printable characters from the input to the sanitized string
    int sanitized_len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isprint(str[i])) {
            sanitized_str[sanitized_len] = str[i];
            sanitized_len++;
        }
    }

    puts2(sanitized_str);
    return (0);
}
