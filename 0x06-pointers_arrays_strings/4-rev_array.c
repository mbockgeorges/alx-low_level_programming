#include "main.h"
#include <stdio.h>

/**
 *reverse_array - function
 *@a:integer pointer
 *@n:integer
 *Description:a function that reverses the content of an array of integers
 *Return:nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int dt = (n / 2);

	if (n > 1 && a != NULL)
	{
		for (i = 0; i < dt; i++)
		{
			int tp = a[i];

			a[i] = a[n - i - 1];
			a[n - i - 1] = tp;
		}
	}

}
