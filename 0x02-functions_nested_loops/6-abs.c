include "main.h"

/**
 * _abs - absolute function
 *
 * @n: integer number
 *
 * Description: computes the absolute value of an integer
 *
 * Return: @n if @n < 0 else -@n
 */
int _abs(int n)
{
	if  (n < 0)
	{
		return (-n);
	}
	return (n);
}
