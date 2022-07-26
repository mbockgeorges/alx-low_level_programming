#include "main.h"
#include <stdio.h>

/**
 *_strncat - function concat
 *@dest: char pointer
 *@src: char pointer
 *@n:integer
 *Description:a function that concatenates two strings.
 *Return: Result
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	if (src == NULL)
		return (dest);
	if (dest == NULL)
		return (src);

	while (dest[l] != '\0')
		l++;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';

	return (dest);
}
