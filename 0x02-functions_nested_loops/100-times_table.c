#include <stdio.h>
#include "main.h"

/**
  *print_times_table - prints the multiplication table from 0-9
  *@limit: the limit
  */

void print_times_table(int limit)
{
	int num1, num2, mult;

	for (num1 = 0; num1 <= limit; num1++)
	{
		putchar('0');
		for (num2 = 1; num2 <= limit; num2++)
		{
			mult = num1 * num2;
			putchar(',');
			putchar(' ');

			if (mult < 100)
				putchar(' ');
			if (mult < 10)
				putchar(' ');

			if (mult >= 100)
			{
				putchar((mult / 100) + '0');
				putchar(((mult / 10)) % 10 + '0');
			}
			else if (mult < 100 && mult >= 10)
			{
				putchar((mult / 10) + '0');
			}
			putchar((mult % 10) + '0');
		}
		putchar('\n');
	}
}
