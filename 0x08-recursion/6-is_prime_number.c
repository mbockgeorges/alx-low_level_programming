#include "main.h"

/**
 *is_divide_successor - function
 *@p: actual successor
 *@n: number
 *Descriptio:define if n is divide by natural number
 *Return: 1 if is divide or 0 else
 */
int is_divide_successor(int p, int n)
{
	if (p > n / 2 && n % p != 0)
		return (1);
	if (n <= 1 || n % p == 0)
		return (0);
	return (is_divide_successor(p + 1, n));
}

/**
 *is_prime_number - prime number
 *@n: number
 *Description: determine if n is prime else
 *Return: return 1 if the input integer prime or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_divide_successor(2, n));
}
