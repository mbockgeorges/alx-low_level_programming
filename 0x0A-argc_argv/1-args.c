#include <stdio.h>

/**
 *main - Entry point
 *@argc: number of argument
 *@argv: all arguments
 *Description:a program that prints the number of arguments passed into it
 *Return: 0
 */
int main(int argc, char **argv)
{
	if (argv)
	{
	}
	printf("%d\n", (argc - 1));
	return (0);
}
