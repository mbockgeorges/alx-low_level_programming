#include "main.h"

/**
 * more_numbers - print
 * Description: it's a function that prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int i, c;

	for (i = '0'; i <= '10'; i++)
		for (c = '0'; c <= '14'; c++)
			_putchar(c);

	_putchar('\n');

}
