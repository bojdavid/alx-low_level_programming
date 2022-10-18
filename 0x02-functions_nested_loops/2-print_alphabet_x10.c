#include "_putchar.c"

void print_alphabet(void);

void print_alphabet_x10(void);

/**
  *main - entry point
  *Return: 0 on success
  */

int main(void)
{
	print_alphabet_x10();
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

/**
  *print_alphabet_x10 - prints the alphabets 10times with a new line
  *Return: a-z*10
  */

void print_alphabet_x10(void)
{
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
}
