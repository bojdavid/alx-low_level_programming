#include <stdio.h>

/**
  *main - prints alphabet from a to z
  *Return: returns 0 on success
  */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch <= 9)
		{
			putchar(ch + '0');
		}
		if (ch < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
