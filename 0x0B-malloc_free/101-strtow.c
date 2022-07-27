#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *numberOfWord - number word
 *@str:string
 *@regex:element to idenfifier two words
 *Description:return the number
 *return: number
 */
int numberOfWord(char *str, char regex)
{
	int i = 0;
	int word  = 0;

	if (!str || !str[0])
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == regex)
			i++;
		if (str[i])
		{
			word++;
			while (str[i] && str[i] != regex)
				i++;
		}
	}
	return (word);
}

/**
 *getWord - get a word
 *@str: string
 *@pos:begin position
 *@regex: character
 *Description:deternmine the word
 *Return: word
 */
char *getWord(char *str, int *pos, char regex)
{
	int i = 0;
	int j = 0;
	char *word = 0;
	int j = 0;

	if (!str || *pos < 0 || !str[*pos])
		return (0);
	while (str[*pos + i] && str[*pos + i] == regex)
		i++;

	*pos += i;
	i = 0;

	while (str[*pos + i] && str[*pos + i] != regex)
		i++;

	if (i <= 0)
		return (0);
	word = (char *)malloc(sizeof(char) * (i + 1));

	if (!word)
		return (0);
}
