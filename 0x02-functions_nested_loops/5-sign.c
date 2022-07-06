#include "main.h"

/**
 *print_sign - Print
 *
 *@n: integer number
 *Description: This function prints the sign of a number
 *
 * Return: 1 and prints + if @n>0, 0 if @n==0 and prints 0,-1 and prints - @n<0
 */
int print_sign(int n)
{
	int x = 0;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}

	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}

	else
	{
		x = 0;
		_putchar('0');
	}

	return (x);

}
