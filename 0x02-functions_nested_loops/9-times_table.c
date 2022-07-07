#include "main.h"

/**
 *times_table - Print
 *Description: prints the 9 times table, starting with 0
 *Return: nothing
 */
void times_table(void)
{
	int x, y, z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
			}
			else if  (z < 10)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;

		}

		_putchar('\n');
		x++;

	}

}
