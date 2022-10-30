#include <stdio.h>
#include "main.h"

/**
  *cap_string - capitalizes all words of a string..
  *@n : a char
  *the difference between an uppercase and lowercase a is 32
  *
  *Return: a char
  */

char *cap_string(char *n)
{
	int i, j;
	char sc[] = " \t\n,;.!?\"(){}";

	for (i = 0; sc[i] != '\0'; i++)
	{
		for (j = 0; *(n + j) != '\0'; j++)
		{

			if (sc[i] == *(n + j) && *(n + j + 1) >= 'a' && *(n + j + 1) <= 'z')
			{
				*(n + j + 1) -= 32;
			}
		}
	}
	return (n);
}
