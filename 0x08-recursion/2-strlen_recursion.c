#include "main.h"

/**
 *_strlen_recursion - function
 *@s: char pointer
 *Description:a function that returns the length of a string
 *Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (s == 0 || s[0] == '\0')
		return (0);

	return (1 + _strlen_recursion((s + 1)));
}
