#include "main.h"
#include <stdio.h>

/**
 *reset_to_98 -function
 *@n:integer pointer
 *Description: function that takes a pointer to an int as parameter and
 *updates the value
 *Return:nothing
 */

void reset_to_98(int *n)
{
	if (n != NULL)
		*n = 98;

}
