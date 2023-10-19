#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 * Return: A pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
	int i = 0;
	char letter;
	char rot13_map[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_shift[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		letter = str[i];
		if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
		{
			char *map = (letter >= 'a' && letter <= 'z') ? rot13_map + 26 : rot13_map;
			str[i] = map[letter - 'A'];
		}
		i++;
	}

	return (str);
}

