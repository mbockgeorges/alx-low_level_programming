#include <stdio.h>

int _putchar(char c)
{
	printf("%c\n", c);

	return (0);
}

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
