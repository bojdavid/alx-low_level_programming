#include "main.h"

/**
  *times_table - prints the multiplication table from 0-9
  */

void times_table(void)
{
	int num1, num2, mult;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			mult = num1 * num2;
			if (mult < 10)
			{
				_printchar(mult + '0');
				_printchar(',');
				_printchar(' ');
			}
			else
			{
				_printchar((mult / 10) + '0');
				_printchar((mult % 10) + '0');
				_printchar(',');
				_printchar(' ');
			}
		}
		_printchar('\n');
	}
}
