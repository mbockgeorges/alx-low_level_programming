#include <stdio.h>


/**
 *main - Entry point
 *Return: Always o (Success)
 *
 */
int main(void)
{
	int i;
	long int I;
	long long int l;
	float f;
	char c;
	
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	printf("size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("size of a long int: %lu byte(s)\n", sizeof(I));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	return (0);
}
