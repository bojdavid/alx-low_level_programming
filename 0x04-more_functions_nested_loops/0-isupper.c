#include "main.h"

/**
  *_isupper - Write a function that checks for uppercase character.
  *@c: an int
  *Return: returns 0 and 1
  */

int _isupper(int c)
{
	int upperchar;

	for (upperchar = 65; upperchar <= 90; upperchar++)
	{
		if (c == upperchar)
			return (1);
		return (0);
	}
	return (0);
}
