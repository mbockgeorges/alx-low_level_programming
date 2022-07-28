#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - check malloc
 *@b:size of memory
 *Description:allocates memory using malloc
 *
 *Return:pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = 0;

	memory = malloc(b);

	if (!memory)
		exit(98);
	return (memory);
}
