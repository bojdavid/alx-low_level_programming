#include "main.h"

/**
  *print_square - Werite a function that prints line.
 *@n: no of dashes
 */

void print_square(int n)
{
	int count = 0;
	int i;

	while (count < n)
	{
		for(i = 0; i < n; i++)
		{
			_putchar('#');
		}
		count++;
		_putchar('\n');
	}
	if (n == 0)
		_putchar('\n');
}
