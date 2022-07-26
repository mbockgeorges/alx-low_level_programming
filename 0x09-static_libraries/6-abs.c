#include "main.h"

/**
 * _abs - absolute function
 *
 * @n: integer value
 *
 * Description:Define the absolute value of an integer
 *
 * Return: @n if @n > 0 or -@n if is not
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	return (n);

}
