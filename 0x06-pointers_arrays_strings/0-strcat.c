#include "main.h"
#include <stdio.h>

/**
 *_strcat - function concat
 *@dest:pointer char
 *@src:pointer char
 *Description:a function that concatenates two strings
 *Return: result
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	if (dest == NULL)
		return (src);
	if (src == NULL)
		return (dest);

	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';

	return (dest);
}
