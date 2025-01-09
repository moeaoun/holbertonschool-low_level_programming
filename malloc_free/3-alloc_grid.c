#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: the number of columns in the grid
 * @height: the number of rows in the grid
 *
 * Return: pointer to the 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    // Check for invalid width or height
    if (width <= 0 || height <= 0)
        return (NULL);

    // Allocate memory for the rows (array of pointers)
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    // Allocate memory for each row and initialize to 0
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            // Free all previously allocated memory if one allocation fails
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        // Initialize all elements of the row to 0
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return (grid);
}

