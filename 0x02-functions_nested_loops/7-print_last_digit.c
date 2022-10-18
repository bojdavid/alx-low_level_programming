#include "main.h"

/**
  *print_last_digit - prints the alphabet, in lowercase, followed by a new line.
  *a: int
  *Return: the asbsolute val of the int
  */

int print_last_digit(int n)
{
	int ld = n % 10;
	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
