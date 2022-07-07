#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Done
 * @n :integer
 * Description: determine times table
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, d;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				d = i * j;

				if (d < 100 && j != 0)
					_putchar(' ');
				else if (j != 0)
					_putchar((d / 100) + '0');

				if (d < 10 && j != 0)
					_putchar(' ');
				else if (j != 0)
					_putchar(((d / 10) % 10) + '0');

				_putchar((d % 10) + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}

			}

			_putchar('\n');
		}
	}

}
