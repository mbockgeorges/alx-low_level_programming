#include "main.h"

/**
 *_strspn - function
 *@s: char pointer
 *@accept: char pointer
 *Description:a function that gets the length of a prefix substring.
 *Return:The bytes initial segment of s which consist only of bytes of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}

		if (!accept[j])
			return (i);

		i++;
		j = 0;
	}

	return (i);
}
