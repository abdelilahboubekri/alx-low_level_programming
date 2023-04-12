#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **boo;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	boo = malloc(sizeof(int *) * height);

	if (boo == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		boo[x] = malloc(sizeof(int) * width);

		if (boo[x] == NULL)
		{
			for (; x >= 0; x--)
				free(boo[x]);

			free(boo);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			boo[x][y] = 0;
	}

	return (boo);
}
