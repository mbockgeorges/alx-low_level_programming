#include "main.h"

/**
 * print_most_numbers - Prints
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: nothing
 */
void print_most_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		if (d != '2' && d != '4')
			_putchar(d);
	_putchar('\n');
}
