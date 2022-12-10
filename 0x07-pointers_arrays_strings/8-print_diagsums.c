#include "main.h"

/**
  *print_diagsums - prints the sum of diagonals in a square matrix
  *@a : the array
  *@size : the size of the array
  */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + ((i * size) + i));
	}
	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + *(a + ((j * size) + (size - 1 - j)));
	}

	printf("%i, %i\n", sum1, sum2);
}
