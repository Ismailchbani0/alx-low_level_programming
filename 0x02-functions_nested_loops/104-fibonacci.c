#include <stdio.h>

int main(void)
{
	int i;
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int sum;

	printf("%u, %u, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		sum = a + b;
		printf("%u", sum);

		if (i < 98)
		{
			printf(", ");
		}
        
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
