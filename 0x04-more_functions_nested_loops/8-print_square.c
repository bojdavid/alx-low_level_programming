#include "main.h"

/**
  *print_square - Werite a function that prints line.
 *@size: no of dashes
 */

void print_square(int size)
{
	int count = 0;
	int i;

	while (count < size)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		count++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
