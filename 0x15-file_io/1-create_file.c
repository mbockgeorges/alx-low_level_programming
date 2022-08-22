#include "main.h"

/**
 *create_file -creates an array of chars
 *@text_content:is a NULL termited string to write
 *@filename:is the name of file to create
 *Return:1 for success, -1 on fail
 */
int create_file(cont char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
