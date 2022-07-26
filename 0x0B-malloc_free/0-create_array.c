#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create allo
 *@size:lenght of array
 *@c:char
 *Description:creates an arra of char, and initializes it with a
 *specific char
 *Return:return NULL @size = 0 or pointer to array
 *or NULL it it afils
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		unsigned int i = 0;
		char *array = (char *)malloc(sizeof(char) * size);

		if (array != 0)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
		return (array);
	}
	return (0);
}
