#include "main.h"

/**
 *_strpbrk - function
 *@s: char pointer
 *@accept: char pointer
 *Description:a function that searches a string for any of a set of bytes
 *
 *Return:a pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	if (s == 0 || accept == 0)
		return (0);

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
