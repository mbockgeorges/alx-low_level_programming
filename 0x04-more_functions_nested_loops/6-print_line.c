#include "main.h"

/**
 * print_line - draw
 * @n: integer
 * Description:draws a straight line in the terminal
 * Return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int c;

		for (c = 0; c < n; c++)
			_putchar('_');
	}
	_putchar('\n');
}
