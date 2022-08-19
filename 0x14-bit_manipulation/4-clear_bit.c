#include "main.h"

/**
 *clear_bit - sets the value 0 at a given index
 *@n: number
 *@index:index
 *Return:1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
