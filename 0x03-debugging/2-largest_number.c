#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	if (isLeapYear)
	{
		daysInMonth[2] = 29; // February has 29 days in a leap year
	}

	if (day > daysInMonth[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	int dayOfYear = day;
	for (int i = 1; i < month; i++)
	{
		dayOfYear += daysInMonth[i];
	}

	if (isLeapYear && month > 2)
	{
		dayOfYear++; // Add an extra day for leap years after February
	}

	printf("Day of the year: %d\n", dayOfYear);
	printf("Remaining days: %d\n", isLeapYear ? 366 - dayOfYear : 365 - dayOfYear);
}
