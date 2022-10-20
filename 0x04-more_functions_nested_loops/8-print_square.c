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
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		count++;
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
