#include "main.h"
#include <stdio.h>

/**
 *rot13 -function
 *@c:char pointer
 *
 *Description:a function that encodes a string using rot13.
 *Return:result
 */
char *rot13(char *c)
{
	int i = 0;
	int j = 0;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[i] != '\0')
	{
		while (j < 52)
		{
			if (c[i] == letter[j])
			{
				c[i] = cod[j];
				j = 52;
			}
			j++;
		}
		i++;
		j = 0;
	}

	return (c);

}
