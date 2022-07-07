#include "main.h"

/**
 * print_numbers - function
 *
 * Description: it's a function that prints the digit, followed by a new line
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
		_putchar(i);

	_putchar('\n');
}
