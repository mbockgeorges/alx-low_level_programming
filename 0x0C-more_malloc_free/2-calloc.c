#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 *_calloc - new allocation
 *@nmemb:elements of size bytes
 *@size: number of bytes
 *Description:allocates memory for an array using malloc
 *Return:memory is set to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory = 0;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (0);
	memory = malloc(nmemb * size);

	if (!memory)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)memory + i) = 0;
	return (memory);
}
