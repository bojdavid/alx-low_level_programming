#include <stdio.h>

/**
  *main - prints that largest prime factor
  *
  *Return: returns 0 on success
  */

int main(void)
{
	unsigned long int M = 600851475143, P = 0, i;

	for (i = 3; i * i <= M; i += 2)
	{
		if (M % i == 0)
		{
			P = i;
			while (M % i == 0)
				M /= i;
		}
	}

	if (M > 1)
		P = M;

	printf("%lu\n", P);

	return (0);
}
