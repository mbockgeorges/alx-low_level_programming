#include "main.h"

/**
 * _isdigit - function
 * @c: integer
 * Description: it's a function that checks for a digit (0 through 9)
 * Return:1 if @c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (0 <= c && c <= 9)
		return (1);
	return (0);
}
