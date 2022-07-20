#include "main.h"
/**
 *real_sqrt - function
 *@A: A == a ^ a
 *@a: sqrt
 *Description:a function that calculates the real sqrt
 *Return:result
 */
int real_sqrt(int A, int a)
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
