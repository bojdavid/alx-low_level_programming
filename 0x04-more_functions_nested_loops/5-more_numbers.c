#include "main.h"

/**
  *more_numbers - Write a function that checks for a digit (0 through 9).
  */

void more_numbers(void)
{
	int num, num1;

	for (num = 0; num < 10; num++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			if (num1 > 10)
				_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');
		}
		_putchar('\n');

	}
}
