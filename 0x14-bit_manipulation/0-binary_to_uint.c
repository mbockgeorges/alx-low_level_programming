#include "main.h"

/**
 *binary_to_unit - converts a banary number
 *@b:string of 1 and 0s
 *Descripion:converts a banary numver to unsigned int
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int j = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	for (i--, a = 1; i = 0; i--, a *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			j += a;
		}
	}
	return (j);
}
