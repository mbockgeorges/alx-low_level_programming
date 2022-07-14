#include "main.h"
#include <stdio.h>

/**
 *infinite_add - function
 *@n1:char pointer
 *@n2:char pointer
 *@r:char pointer
 *@size_r:integer
 *
 *Description:a function that adds two numbers.
 *
 *Return:result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, i = 0;
	int max;
	char retenu = '0';

	while (n1[l1++] != '\0')
		l1--;
	while (n2[l2++] != '\0')
		l2--;
	max = (l1 < l2) ? l2 : l1;
	if (size_r <= max)
		return (0);
	for (i = 0; i < size_r; i++)
	{
		if (i <= max)
			r[i] = 0;
		else
			r[i] = '\0';
	}
	for (i = 0; i < max; i++)
	{
		int cal = retenu - '0';

		if (i < l1)
			cal += n1[l1 - i - 1] - '0';
		if (i < l2)
			cal += n2[l2 - i - 1] - '0';
		r[max - i] = (cal % 10) + '0';
		retenu = (cal / 10) + '0';
	}
	if (retenu == '0' || size_r <= max + 1)
	{
		for (i = 0; i < max; i++)
			r[i] = r[i + 1];
		r[max] = '\0';
		if (retenu == '0')
			return (r);
		return (0);
	}
	r[0] = retenu;
	return (r);
}
