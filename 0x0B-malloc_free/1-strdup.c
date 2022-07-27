#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup -function
 *@str:array of char
 *Description:Create a pointer to newly allocated space in memory
 *which contains a copy of the string given as a parameter
 *Return:result
 */
char *_strdup(char *str)
{
	int leng = 0;
	char *copy = 0;

	if (str == 0)
		return (0);

	while (str[leng++])
		;
	leng--;
	copy = (char *)malloc(sizeof(char) * (leng + 1));
	if (copy)
	{
		copy[leng] = '\0';
		while (--leng >= 0)
			copy[leng] = str[leng];
	}
	return (cpy);
}
