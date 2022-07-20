#include "main.h"
/**
 *_sqrt_recursion - function
 *@A: A == a ^ a
 *@a: sqrt
 *Description:a function that returns the natural square root of a number.
 *Return:result
 */
int _sqrt_recursion(int A, int a)
{
	if (a * a > A)
		return (-1);
	if (a * a == A)
		return (a);

	return (real_sqrt(A, a + 1));
}

/**
 *_sqrt_recursion - sqrt
 *@n:integer
 *Description:determine natural square root
 *Return:result
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (real_sqrt(n, 1));
}
