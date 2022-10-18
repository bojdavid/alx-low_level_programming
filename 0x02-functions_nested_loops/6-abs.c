#include "_putchar.c"

int _abs(int a);

/**
  *main - entry point
  *Return: 0 on success
  */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);	
	return (0);
}

/**
  *_abs - prints the alphabet, in lowercase, followed by a new line.
  *a: int
  *Return: the asbsolute val of the int
  */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}
}
