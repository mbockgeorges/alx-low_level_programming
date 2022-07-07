#include "main.h"

/**
 *times_table - Print
 *Description: prints the 9 times table, starting with 0
 *Return: nothing
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z < 100 && y != 0)
				_putchar(' ');
			else if (y != 0)
				_putchar((z / 100) + '0');

			if (z > 9)
				_putchar(((z / 10) % 10) + '0');
			else if (k != 0)
				_putchar(' ');

			_putchar((z % 10) + '0');

			if (y == 9)
				_putchar('\n');

			else
			{
				_putchar(',');
			}
		}
	}
}
