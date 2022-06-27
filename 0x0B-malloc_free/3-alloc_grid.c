#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *		integers with each element initialized to 0
 * @width: the width of the 2-dimensional array
 * @height: the height of the 2-dimensional array
 * Return: if operation successful-a pointer to the 2-dim array of ints
 *		0-if width <= 0, height <= 0, or function fails
 */

int **alloc_grid(int width, int height)
{
	int **twodim;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodim = malloc(sizeof(int *) * height);

	if (twodim == NULL)
	{
		return (NULL);
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		twodim[height_index] = malloc(sizeof(int) * width);

		if (twodim[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twodim[height_index]);

			free(twodim);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twodim[height_index][width_index] = 0;
	}

	return (twodim);
}
