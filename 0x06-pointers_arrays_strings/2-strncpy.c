#include "main.h"
#include <stdio.h>

/**
 *_strncpy - function
 *@dest: char pointer
 *@src: char pointer
 *@n: integer
 *Description:a function that copies a string.
 *Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
