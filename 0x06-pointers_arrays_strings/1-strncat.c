#include "main.h"

/**
  *_strncat - a function that concacenates two strings
  *@dest: a pointer variable
  *@src: a pointer variable
  *@n: an int
  *
  *Return: none
  */


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
}
