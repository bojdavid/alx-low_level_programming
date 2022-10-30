#include <stdio.h>
#include "main.h"

/**
  *string_toupper - changes all lowercase letters of a string to uppercase.
  *@n : a char
  *the difference between an uppercase and lowercase a is 32
  *
  *Return: a char
  */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; *(n + i) != '\0'; i++)
	{
		if (*(n + i) >= 'a' && *(n + i) <= 'z')
		{
			*(n + i) -= 32;
		}
	}
	return (n);
}
