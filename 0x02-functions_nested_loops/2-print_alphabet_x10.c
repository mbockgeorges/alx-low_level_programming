#include "main.h"

/**
 * print_alphabet_x10 - print
 * Description: print times x 10 the lower case alpha
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int d, i;

	for (i = 0; i < 10; i++)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);
		_putchar('\n');
	}
}
