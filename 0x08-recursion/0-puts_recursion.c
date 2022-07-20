#include "main.h"

/**
 *_puts_recursion - function
 *@s: char pointer
 *Destcription:a function that prints a string
 *Return:nothing
 */
void _puts_recursion(char *s)
{
	if (s == 0 || s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion((s + 1));
	}
}
