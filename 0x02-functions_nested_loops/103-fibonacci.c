#include <stdio.h>

long int sum = 0;

void fibonacci(long int a, long int b);

/**
  *main - fibbonacci sequence
  *Return: returns 0 on success
  */

int main(void)
{
	fibonacci(1, 1);
	return (0);
}

/**
  *fibonacci - fibonnaci seq
  *@a: where it initial number
  *@b: where it preceeding number
  */

void fibonacci(long int a, long int b)
{
	if (a < 4000000)
	{
		long int temp = a;

		a = b;
		b = temp + b;
		int mod;
		
		mod= a % 2;
		if (mod == 0)
			sum += a;
		fibonacci(a, b);
	}
	else
		printf("%ld\n", sum);
}
