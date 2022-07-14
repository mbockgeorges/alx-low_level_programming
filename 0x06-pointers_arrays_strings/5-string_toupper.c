#include "main.h"
#include <stdio.h>

/**
 *string_toupper -function
 *@c:array of char
 *Description:a function that changes all lowercase letters.
 *Return:result
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ('a' <= c[i] && c[i] <= 'z')
			c[i] = 'A' + (c[i] - 'a');
		i++;
	}

	return (c);
}
