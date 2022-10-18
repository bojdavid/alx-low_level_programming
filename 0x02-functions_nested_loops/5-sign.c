#include "_putchar.c"

int print_sign(int n);

/**
  *main - entry point
  *Return: 0 on success
  */

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}


/**
  *print_sign - prints the alphabet, in lowercase, followed by a new line.
  *@n: is int
  *Return: a-z
  */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
