#include "main.h"
#include <stdio.h>

/**
 *_strcpy - function pointer
 *@dest:char pointeur
 *@src:char pointeur
 *Description:a function that copies the string pointed to by src
 *Return:return value the pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	if (dest != NULL && src != NULL)
	{
		int a = 0;

		while (src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}

		while (dest[a] != '\0')
		{
			dest[a] = '\0';
			a++;
		}

		return (dest);
	}
	return (NULL);
}
