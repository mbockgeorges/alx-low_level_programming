#include "main.h"

/**
 * print_alphabet - print alphabet
 * Description: this function print the lowecase alphabet
 * and go to the new line
 * Return: Nothing
 */

void print_alphabet(void)
{
	int d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar('\n');
}
