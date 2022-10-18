#include "_putchar.c"

void print_alphabet(void);


/**
  *main - entry point
  *Return: 0 on success
  */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
  *print_alphabet - prints the alphabet, in lowercase, followed by a new line.
  *Return: a-z
  */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
