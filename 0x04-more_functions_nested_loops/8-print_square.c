#include "main.h"


/**
 *print_square - draw
 *@size: integer
 *Description:prints a square, followed by a new line
 *Return:nothing
 */
void print_square(int size)
{
	if (size > 0)
	{
		int a, b;

		for (b = 0; b < size; b++)
		{
			for (a = 0; a < size; a++)
				_putchar('#);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
