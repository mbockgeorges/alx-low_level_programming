#include "main.h"

/**
 * _isupper - function uppercase
 * @c: integer
 * Description:it's a function that checks for uppercase character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if ('A' <= c && c >= 'Z')
		return (1);
	else
		return (0);

}
