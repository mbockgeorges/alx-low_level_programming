#include <stdio.h>

/**
 * main -Entry point
 * Description:finds and prints the largest prime factor of 612852475143
 * Return:0
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long prime number = 1;
	unsigned long i = 2;

	while (i <= number)
	{
		if (number % i == 0)
		{
			if (i > prime_number)
				prime_number = 1;
			number = number / i;
		}
		else
			i++;
	}
	if (prime_number >= 2)
		printf("%lu\n", prime_number);

	return (0);
}
