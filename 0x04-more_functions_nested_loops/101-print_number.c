#include "main.h"

/**
  *print_number - - a function that prints an integer
  *@n: an int
  */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n < 10000 && n >= 1000)
	{
		_putchar((n / 1000) + '0');
		n = n % 1000;
		if (n < 100)
			_putchar('0');
	}

	if (n < 1000 && n >= 100)
	{
		_putchar((n / 100) + '0');
		n = n % 100;
		if (n < 100)
			_putchar('0');
	}

	if (n < 100 && n >= 10)
	{
		_putchar((n / 10) + '0');
		n = n % 10;
	}

	if (n < 10 && n >= 0)
		_putchar(n + '0');

}
