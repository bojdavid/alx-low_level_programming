#include "main.h"

/**
  *_isdigit - Write a function that checks for a digit (0 through 9).
  *@c: is an int
  *Return: returns 0 and 1
  */

int _isdigit(int c)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if (c == digit)
			return (1);
		return (0);
	}
	return (0);
}
