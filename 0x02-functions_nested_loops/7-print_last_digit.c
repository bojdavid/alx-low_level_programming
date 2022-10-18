#include "_putchar.c"

int print_last_digit(int);

/**
  *main - entry point
  *Return: 0 on success
  */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

/**
  *print_last_digit - prints the alphabet, in lowercase, followed by a new line.
  *a: int
  *Return: the asbsolute val of the int
  */

int print_last_digit(int a)
{
	int ld = a % 10;
	_putchar(ld);
	return (ld);
}
