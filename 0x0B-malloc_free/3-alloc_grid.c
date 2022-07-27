#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid -function
 *@width:width of array
 *@height:height of array
 *Description:determine a pointer
 *Return:an array
 */
int **alloc_grid(int width, int height)
{
	int **array2D = 0;
	int i = 0;
	int j = 0;

	if (width > 0 && height > 0)
	{
		array2D = (int **)malloc(sizeof(int *) * height);
		if (array2D)
		{
			for (j = 0; j < height; j++)
			{
				array2D[j] = (int *)malloc(sizeof(int) * width);
				if (array2D[j])
				{
					for (i = 0; i < width; i++)
						array2D[j][i] = 0;
				}
				else
				{
					for (i = 0; i < j; i++)
					{
						free(array2D[i]);
						array2D[i] = 0;
					}
					free(array);
					array2D = 0;
					break;
				}
			}
		}
	}
	return (array2D);
}
