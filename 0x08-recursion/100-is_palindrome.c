#include "main.h"

/**
 * palindrome - real palendrome
 * @left: left walk
 * @s: string
 * @right: right walk
 * Description: determinr if caractere between left and right
 * Return:1 if is palendrome 0 else
 */
int palindrome(int left, char *s, int right)
{
	if (s == 0 || left >= right)
		return (1);
	if (s[left] == ' ')
		return (palindrome(++left, s, right));
	if (s[right] == ' ')
		return (palindrome(left, s, --right));
	if (s[left] != s[right])
		return (0);
	return (palindrome(left + 1, s, right - 1));
}

/**
 * lenght_of - determine lenght
 * @s: string
 * Description: determine leng
 * Return:lenght
 */
int lenght_of(char *s)
{
	if (s[0])
		return (1 + lenght_of((s + 1)));
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: string
 * Description: define if a string is a palindrome
 * Return: 1 if string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int leng = 0;

	if (s == 0)
		return (0);
	if (s[0] == '\0')
		return (1);

	leng = lenght_of(s);
	return (palindrome(0, s, leng - 1));
}
