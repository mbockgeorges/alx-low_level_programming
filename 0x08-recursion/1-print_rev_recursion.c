#include "main.h"

/**
 *_print_rev_recursion - function
 *@s: char pointer
 *Description: a function that prints a string in reverse
 *Return:nothing
 */
void _print_rev_recursion(char *s)
{
	if (s != 0 && s[0] != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(s[0]);
	}
}
