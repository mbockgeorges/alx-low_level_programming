#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints
 *@n : integer
 *Description: determine the last digit
 *Return: last digit of @n
 */
void print_to_98(int n)
{
	int j;

	if (n < 98)
	{
		for (j = n; j <= 9; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(",");
		}
	}

	else
	{
		for (j = n; j >= 9; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(",");
		}
	}

	printf("\n");

}
