#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all possible different combinations
 * omitting combinations of the same digits and printing
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	for (first_digit = 0; first_digit <= 7; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 8; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit <= 9; third_digit++)
			{
				putchar('0' + first_digit);
				putchar('0' + second_digit);
				putchar('0' + third_digit);

				if (first_digit != 7 || second_digit != 8 || third_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
