#include <stdio.h>

/**
 *main -Prints all possible combinaisons of two differents digits
 * in ascending order, separated by a comma followed by a space
 * the use function putchar
 *Return: Always 0 (Success)
 */
int main(void)
{

	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{

			putchar((n % 10) + '0');
			putchar((m % 10) + '0');

			if (n == 8 && m == 9)
				continue;

			putchar(',');
			putchar(' ');

		}


	}

	putchar('\n');

	return (0);

}
