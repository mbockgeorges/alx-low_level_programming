#include "main.h"

/**
 * print_diagonal - draw
 * @n: integer
 * Description:draws a diagonal line on the terminal.
 * Return:nothing
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
