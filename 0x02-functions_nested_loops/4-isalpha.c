#include "_putchar.c"

int _isalpha(int c);

/**
  *main - entry point
  *Return: 0 on success
  */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
  *_isalpha - checks if a letter is lowercase
  *@c: is an int
  *Return: returns 0 if true and 1 if false
  */

int _isalpha(int c)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}
	
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}
	return (0);
}
