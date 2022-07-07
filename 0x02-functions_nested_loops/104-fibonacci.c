#include <stdio.h>

/**
 * main - long term
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	unsigned long int b = 0;
	unsigned long int a = 1;
	unsigned long int z = 0;

	int i;

	for (i = 0; i < 98; i++)
	{
		z = a + b;
		b = a;
		a = z;

		printf("%lu", z);

		if (i != 97)
			printf(", ");
	}

	printf("\n");

	return (0);

}
