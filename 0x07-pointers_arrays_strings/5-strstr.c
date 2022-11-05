#include "main.h"

/**
 * _strstr - function that searches a string for any of a set of bytes
 *
 * @haystack:first occurrence in the string
 *
 * @needle: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] && (needle[0] == haystack[i]))
		{
			if (needle[j] == haystack[i + j])
				j++;
			else
				break;
		}
		if (needle[j] != '\0')
			j = 0;
		else
			return (haystack + i);
	}
	return ('\0');

}
