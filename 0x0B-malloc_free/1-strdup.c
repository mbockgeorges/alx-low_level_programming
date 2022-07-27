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
	char *cpy = 0;

	if (str == 0)
		return (0);

	while (str[leng++])
		;
	leng--;
	cpy = (char *)malloc(sizeof(char) * (leng + 1));
	if (cpy)
	{
		cpy[leng] = '\0';
		while (--leng >= 0)
			cpy[leng] = str[leng];
	}
	return (cpy);
}
