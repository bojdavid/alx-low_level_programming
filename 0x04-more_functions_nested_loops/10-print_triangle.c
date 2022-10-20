#include "main.h"

/**
  *print_triangle - Werite a function that prints line.
 *@size: no of dashes
 */

void print_triangle(int size)
{
	int count = 1;
	int i;

	while (count <= size)
	{
		for (i = count; i <= size; i++)
		{
			_putchar(' ');
		}
		_putchar('#');
		count++;
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
