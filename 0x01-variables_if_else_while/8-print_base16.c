#include <stdio.h>

/**
  *main - prints alphabet from a to z
  *Return: returns 0 on success
  */

int main(void)
{
	 int ch;

	for (ch = '0'; ch <= '15'; ch++)
	{
		putchar('%x',ch);
		putchar('\n');
	}
	return (0);
}
