#include "main.h"

/**
 *_atoi - function
 *@s:char pointer
 *Description:a function that convert a string to an integer
 *Return: integer
 */
int _atoi(char *s)
{
	int sig = 1;
	int i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sig *= -1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0')
	{
		res = (res * 10) + (s[i] - '0')
		i++;
	}
	res *= sig;
	return (res);
}
