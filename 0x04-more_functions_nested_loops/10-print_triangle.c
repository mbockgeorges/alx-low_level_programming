#include "main.h"

/**
 * print_triangle - raw triangle
 * @size: size of triangle
 * Description: prints a triangle, folowed by a  new line
 * Return: nothing
 */

void print_triangle(int size)
{

	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
