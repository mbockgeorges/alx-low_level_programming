#include "main.h"

/**
 * jack_bauer - Print
 * Description:prints every minute of the day and starting from 00:00 to 23:59
 * Return: nothing
 */
void jack_bauer(void)
{

	int H, m;

	for (H = 0; H < 24; H++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
