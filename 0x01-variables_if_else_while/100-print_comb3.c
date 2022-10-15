#include <stdio.h>

/**
  *main - prints alphabet from a to z
  *Return: returns 0 on success
  */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			/*
			 *This if statement is added so when it gets to the last number i.e 89 .
			 *it doesn't add a ',' and ' '
			 */
			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');

		}
			}
	putchar('\n');
	return (0);
}
