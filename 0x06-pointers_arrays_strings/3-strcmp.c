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

	for (i = 0; (*(s1 + i) != '\0') && (*(s2 + i) != '\0') && (*(s1 + i) == *(s2 + i)); i++)
	{
		continue;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*(s1 + i) - *(s2 + i));
}
