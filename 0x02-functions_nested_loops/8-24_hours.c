#include "main.h"

/**
  *jack_bauer - time
  *Return: string
  */

void jack_bauer(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 3; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 < 6; num3++)
			{
				for (num4 = 0; num4 <= 9; num4++)
				{
					_putchar(num1 + '0');
					_putchar(num2 + '0');
					_putchar(':');
					_putchar(num3 + '0');
					_putchar(num4 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
