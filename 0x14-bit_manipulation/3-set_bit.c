#include  "main.h"

/**
 *set_bit - sets value of bit
 *@n:a pointer to the number
 *@index:the index
 *Return:1 for success and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
