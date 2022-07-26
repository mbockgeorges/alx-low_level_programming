#include "main.h"
#include <stdio.h>

/**
 *_puts -function
 *@str: char pointer
 *Description:function that prints a string, followed by a new line, to stdout.
 *Return:nothing
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		int p = 0;

		while (str[p] != '\0')
		{
			_putchar(str[p]);
			p++;
		}
		_putchar('\n');
	}
}
