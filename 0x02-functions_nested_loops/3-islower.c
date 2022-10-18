#include "_putchar.c"

int _islower(int c);

/**
  *main - entry point
  *Return: 0 on success
  */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
  *_islower - checks if a letter is lowercase
  *@c: is int
  *Return: returns 0 if true and 1 if false
  */
int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}
	return (0);
}
