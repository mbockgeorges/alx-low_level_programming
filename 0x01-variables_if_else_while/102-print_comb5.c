#include <stdio.h>

/**
 *main -Prints all possible  combinaisonsof two two digit numbers ranging from 0-99, separed by comma followed espace
 *the use function  putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(',');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			if (n == 98 && m == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
