#include <stdio.h>


/**
 * main - sum the term
 *
 * Return: 0
 */
int main(void)
{
	long int x = 0;
	long int y = 1;
	long int z = 0;

	long int d = 0;

	while (z < 4000000)
	{
		z = x + y;
		y = x;
		x = z;

		if (z % 2 == 0)
		d = d + z;
	}

	printf("%ld\n", d);

	return (0);

}
