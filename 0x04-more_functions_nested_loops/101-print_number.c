#include "main.h"

/**
 * print_number - prints
 * @n: integer
 * Description: prints an integer
 * Return: nothing
 */
void print_number(int n)
{

	int d = n;

	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}

	if ((d / 10) > 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
