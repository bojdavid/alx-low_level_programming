#include <stdio.h>

/**
  *main - prints alphabet from a to z
  *Return: returns 0 on success
  */

int main(void)
{
	 char ch;

	printf("Alphabets from a - z are: \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q')
		{
			putchar(ch);
		}
		putchar('\n')
	}
	return (0);
}
