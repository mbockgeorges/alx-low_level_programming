#include "main.h"

/**
 * _islower - ush
 *
 * @c: input caracter
 * Description: Write a function that checks for lowercase character
 * Return: 1 is @c is lowercase 0 or not
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}
