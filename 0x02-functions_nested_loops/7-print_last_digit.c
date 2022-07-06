#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n : integer number
 * Description: prints the last digit of a number
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (n < 0)
		d = -d;

	_putchar(d + '0');

	return (d);

}
