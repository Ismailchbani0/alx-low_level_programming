#include <stdio.h>

int main(void)
{
	int i;
	unsigned long fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (i = 0; i < 49; i++)
	{
		printf("%lu, ", fibonacci[i]);
	}

	printf("%lu\n", fibonacci[49]);

	return (0);
}
