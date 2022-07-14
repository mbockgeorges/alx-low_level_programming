#include "main.h"
#include <stdio.h>

/**
 *leet - function
 *@code: array of char
 *Description:encodes a string
 *Return: result
 */
char *leet(char *code)
{
	char letter[] = "aeotl";
	char encode[] = "43071";
	int i = 0;
	int j = 0;

	while (code[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (code[i] == letter[j] || 'a' +
(code[i] - 'A') == letter[j])
				code[i] = encode[j];
		}
		i++;
	}

	return (code);
}
