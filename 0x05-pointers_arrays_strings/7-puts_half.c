#include "main.h"
#include <stdio.h>

/**
 *puts_half -function
 *@str:char pointer
 *Description:a function that prints half of a strin
 *Return:nothing
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
		int a = 0;
		int b = 0;

		while (str[a] != '\0')
			a++;

		b = a / 2;
		if (a % 2 == 1)
			b++;

		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
		_putchar('\n');

	}
}
