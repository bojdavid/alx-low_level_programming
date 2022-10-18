#include "main.h"

/**
  *print_to_98 - print ints from n to 98
  *@n: start
  */

void print_to_98(int n)
{
	int num;
	
	if (num <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (num = n; num >=98; num--)
		{
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
