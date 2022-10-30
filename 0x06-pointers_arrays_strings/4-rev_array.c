#include "main.h"

/**
  *reverse_array -  a function that reverses the
  *content of an array of integers
  *@a: an int
  *@n: an int
  *
  */

void reverse_array(int *a, int n)
{
	int temp, i;
	int half_N = (n / 2);

	for (i = 0; i < half_N; i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
