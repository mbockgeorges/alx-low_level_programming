#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - function
 * @n:integer
 * Description: print that @n is positive, negative or null
 * Return:nothing
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
}
