#include "main.h"

/**
  *_strcmp - a functions that compares to int
  *@s1: a char
  *@s2: a char
  *
  *Return: returns an int
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (*(s1 + i) != '\0') && (*(s1 + i) != '\0'); i++)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
	}

	return (0);
}
