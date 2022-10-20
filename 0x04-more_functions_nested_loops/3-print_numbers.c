#include "main.h"

/**
  *print_numbers - Write a function that checks for a digit (0 through 9).
  */

void print_numbers(void)
{
	int num; 

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
