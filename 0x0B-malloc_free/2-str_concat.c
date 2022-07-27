#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat -function
 *@s1:char pointer
 *@s2:char pointer
 *Description:concates two strings
 *Return:result
 */
char *str_concat(char *s1, char *s2)
{
	int leng1 = 0;
	int leng2 = 0;
	char *conca = 0;
	int i = 0;

	while (s1 != 0 && s1[leng1++])
		;
	while (s2 != 0 && s2[leng2++])
		;
	leng1 = (leng1 == 0) ? 0 : leng1 - 1;
	leng2 = (leng2 == 0) ? 0 : leng2 - 1;
	conca = (char *)malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (conca)
	{
		for (i = 0; i < (leng1 + leng2); i++)
		{
			if (i < leng1)
				conca[i] = s1[i];
			else
				conca[i] = s2[i - leng1];
		}
		conca[leng1 + leng2] = '\0';
	}
	return (conca);
}
