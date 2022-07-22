#include <stdio.h>

/**
 *main -Entry point
 *@argc: number of arguments
 *@argv: all arguments
 *Description:Write a program that prints all arguments it receives.
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
