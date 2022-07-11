#include "main.h"
#include <stdio.h>

/**
 *print_array -function
 *@a:integer pointer
 *@n:integer pointer
 *Description: a function that prints n elements of an array
 *Return: nothing
 */
void print_array(int *a, int n)
{
	if (a != NULL && n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i != n - 1)
				printf(", ");
		}
	}
	printf("\n");
}
