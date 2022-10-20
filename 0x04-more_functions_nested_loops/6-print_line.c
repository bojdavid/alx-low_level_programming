#include "main.h"

/**
  *print_line - Werite a function that prints line.
 *@n: no of dashes
 */

void print_line(int n)
{
	int count = 1;

	while (count <= n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');

}
