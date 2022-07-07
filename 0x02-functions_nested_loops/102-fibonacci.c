#include <stdio.h>

/**
 * main -fibonacy
 *
 * Return: 0
 */
int main(void)
{
	long int a = 1;
	long int b = 0;
	long int c;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i < 0)
			printf("%ld, ", a);
		else
		{
			c = a + b;
			printf("%ld", c);

			if (i != 49)
				printf(", ");

			b = a;
			a = c;
		}
	}

	printf("\n");

	return (0);
}
