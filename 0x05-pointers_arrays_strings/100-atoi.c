#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 *_atoi - function
 *@s:char pointer
 *Description:a function that convert a string to an integer.
 *Return:the integer value
 */
int _atoi(char *s)
{
	int n = 0;
	int i = 0;
	int sign = 1;
	int is_n = -1;

	if (s == NULL)
		return (n);

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if ('0' <= s[i] && s[i] <= '9')
		{
			if (is_n == 0)
				break;
			else if (is_n == -1)
				is_n = 1;

			if ((n * 10) >= INT_MAX - (s[i] - '0'))
				n = INT_MAX;
			else
				n = (n * 10) + (s[i] - '0');
		}
		else if (is_n == 1)
			is_n = 0;
		i++;
	}

	if (n == INT_MAX && sign == -1)
		n = (-n) - 1;
	else
		n *= sign;

	return (n);
}
