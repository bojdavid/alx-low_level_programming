#include <stdio.h>

/**
  *main - prints alphabet from a to z
  *Return: returns 0 on success
  */

int main(void)
{
	 char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
