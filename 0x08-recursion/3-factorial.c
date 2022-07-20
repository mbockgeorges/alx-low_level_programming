#include "main.h"

/**
 *factorial - function
 *@n:integer
 *Description:a function that returns the factorial of a given number
 *Return:result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
