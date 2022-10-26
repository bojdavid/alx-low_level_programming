#include "main.h"

/**
 *_strcat -  a function that concatenates two strings
 *@dest: a char
 *@src: a char
 *Return: returns char on success
*/

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);

}
