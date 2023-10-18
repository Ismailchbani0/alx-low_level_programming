#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	char leet_map[256] = {0};

	/*Initialize the leet_map to the corresponding 1337 values*/
	leet_map['a'] = '4';
	leet_map['A'] = '4';
	leet_map['e'] = '3';
	leet_map['E'] = '3';
	leet_map['o'] = '0';
	leet_map['O'] = '0';
	leet_map['t'] = '7';
	leet_map['T'] = '7';
	leet_map['l'] = '1';
	leet_map['L'] = '1';

	while (str[i] != '\0')
	{
		if (leet_map[(unsigned char)str[i]] != 0)
		{
		str[i] = leet_map[(unsigned char)str[i]];
		}
		i++;
	}

	return (str);
}
