#include "main.h"

/**
  *_strpbrk - searches a string for any of a set of bytes.
  *@s: a char
  *@accept: a char
  *Return: a char
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
