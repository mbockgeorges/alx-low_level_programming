#include "main.h"

/**
 *_memset - function
 *@s: char pointer
 *@b: character
 *@n: unsigned integer
 *Description:a function that fills memory with a constant byte
 *Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == 0)
		return (s);

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
