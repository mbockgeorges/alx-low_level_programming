#include "main.h"

/**
 *_strchr - function
 *@s: char pointer
 *@c: char pointer
 *Description:a function that locates a character in a string.
 *Return: @c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == 0)
		return (0);

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	if (s[i] == c)
		return (s + i);
}
