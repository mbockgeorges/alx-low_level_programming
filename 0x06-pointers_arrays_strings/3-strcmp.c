#include "main.h"
#include <stdio.h>

/**
 *_strcmp - function
 *@s1:char pointer
 *@s2:char pointer
 *Description:a function that compares two strings
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] = s2[i]);
}
