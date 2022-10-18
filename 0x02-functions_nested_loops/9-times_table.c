#include "main.h"

/**
  *times_table - prints the multiplication table from 0-9
  */

void times_table(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar((num * 0) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 1) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 2) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 3) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 4) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 5) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 6) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 7) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 8) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((num * 9) + '0');
		_putchar(',');
		_putchar(' ');

	}
	_putchar('\n');
}
