#include <stdio.h>

/**
 *main -Prints all single digit numbers of base 10
 *the use only patchar
 *Return: Always 0 (Success)
 */
int main(void)
{

	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);

}
