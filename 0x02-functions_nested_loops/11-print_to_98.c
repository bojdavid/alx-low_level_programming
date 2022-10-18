#include "main.h"

/**
  *print_to_98 - print ints from n to 98
  *@n: start
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n; n <= 98; n++)
		{
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
		for (n; n >= 98; n--)
		{
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
}
