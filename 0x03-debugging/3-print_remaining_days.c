#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * remaining in the year considering leap years
 * @month: The month of the year
 * @day: The day of the month
 * @year: The  year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 2)
		{
			day++;
		}
	}
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		int dayOfYear = day;
	for (int i = 1; i < month; i++)
	{
		dayOfYear += daysInMonth[i];
	}
	printf("Day of the year: %d\n", dayOfYear);
	printf("Remaining days: %d\n", (isLeapYear(year) ? 366 : 365) - dayOfYear);
	}
}

int isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return (1);
	}
	return (0);
}
