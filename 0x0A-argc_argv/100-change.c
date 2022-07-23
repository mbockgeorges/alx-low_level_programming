#include  <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc:number of arguments
 *@argv:all arguments
 *Description:a program that prints the minimum number of coins
 *Return: 0
 */
int main(int argc, char **argv)
{
	int coins = 0;
	int number_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins <= 0)
		printf("0\n");
	else
	{
		number_coins += coins / 25;
		coins = coins % 25;
		number_coins += coins / 10;
		coins = coins % 10;
		number_coins += coins / 5;
		coins = coins % 5;
		number_coins += coins / 2;
		number_coins += coins % 2;

		printf("%d\n", number_coins);
	}
	return (0);
}
