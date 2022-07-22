#include <stdio.h>

/**
 *main -entry point
 *@argc: leng of argv
 *@argv: all commands
 *Description:a program that prints its name
 *Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
