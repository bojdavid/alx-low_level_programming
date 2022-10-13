#include <stdio.h>

/**
*main - Entry point
*Return: always returns 0
*/

main(void)
{
	printf("Size of an char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of an long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of an float: %zu byte(s)\n", sizeof(float));

}
