#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_leng - calcul leng
 *@s:string
 *Description:calcul the leng of string
 *Return:leng of string
 */
unsigned int string_leng(char *s)
{
	if (!s || !s[0])
		return (0);
	return (1 + string_leng((s + 1)));
}

/**
 *string_add -add
 *@s1:first string
 *@s2:second string
 *@p:position init
 *@l:leng
 *DEscription:add @s2 in S1
 *Return: nothing
 */
void string_add(char *s1, char *s2, unsigned int p, unsigned int l)
{
	unsigned int i = 0;

	while (i < l && s2[i])
	{
		s1[i + p] = s2[i];
		i++;
	}
}

/**
 *string_nconcat - n concatenation
 *@s1:first string
 *@s2:second string
 *@n:leng of string
 *Description:concates two strings
 *Return:pointer shall point to a
 *newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i_1 = 0;
	unsigned int i_2 = 0;
	char *result;

	if (!s1 && !s2)
	{
		result = (char *)malloc(sizeof(char));
		if (result)
			result[0] = '\0';
		return (result);
	}

	i_1 = string_leng(s1);
	i_2 = string_leng(s2);

	if (n < i_2)
		i_2 = n;

	result = (char *)malloc(sizeof(char) * (i_1 + i_2 + 1));
	if (!result)
		return (0);

	string_add(result, s1, 0, i_1);
	string_add(result, s2, i_1, i_2);
	result[i_1 + i_2] = '\0';
	return (result);
}
