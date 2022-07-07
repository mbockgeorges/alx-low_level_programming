#include "main.h"

/**
 * print_triangle - function
 * @size:integer
 * description:prints a triangle, followed by a new line
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int p;
	        int q;

		for (p = 0; p < size; p++)
		{
			for (q = 0; q < size; q++)
			{
				if (q < size - p - 1)
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
