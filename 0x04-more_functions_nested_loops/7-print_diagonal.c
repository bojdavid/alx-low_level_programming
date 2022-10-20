#include "main.h"

/**
  *print_diagonal - Werite a function that prints line.
 *@n: no of dashes
 */

void print_diagonal(int n)
{
	int count, space;

	for (count = 1; count <= n; count++)
	{
		for (space = 1; space <= count; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
