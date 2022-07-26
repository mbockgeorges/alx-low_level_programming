#include "main.h"

/**
 *_memcpy - function
 *@dest: char pointer
 *@src: char pointer
 *@n: unsigned integer
 *Description:a function that copies memory area.
 *Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == 0 || src == 0)
		return (dest);

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
