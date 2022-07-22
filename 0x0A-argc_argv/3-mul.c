#include <stdio.h>

/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: all arguments
 *Description:a program that multiplies two numbers
 *Return:0
 */
int main(int argc,  char **argv)
{
	if (argc == 3)
		printf("%d\n", (atoi(argv[1] * atoi(argv[2]))));
	else
		printf("Error\n");
	return (0);
}
