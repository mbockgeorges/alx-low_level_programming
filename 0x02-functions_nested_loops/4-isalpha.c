#include "main.h"

/**
 * _isalpha - bush
 * @c: the caracter
 * Description: checks for alphabetic character
 * Return: 1 is @c it is character 0 or not
 */

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
