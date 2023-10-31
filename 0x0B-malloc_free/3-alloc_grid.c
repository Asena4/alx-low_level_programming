#include "main.h"

/**
 ***alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **output;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			free(output);
			for (j = 0; j <= height; j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}
