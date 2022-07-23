#include <stdio.h>

/**
 *main - Entry point
 *@argc:number of argumentd
 *@argv:all arguments
 *Description:a program that adds positive numbers
 *Return:0
 */
int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	int sum = 0;
	int number = 0;

	while (i < argc)
	{
		while (argv[i][j])
		{
			if ('0' <= argv[i][j] && argv[i][j] <= '9')
				number = (number * 1à) + (argv[i][j] - '0');
			else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += number;
		number = 0;
		j = 0;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
