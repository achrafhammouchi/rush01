// allocate_grid.c
#include <stdlib.h>

int	**allocate_grid(void)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(4 * sizeof(int *));
	if (!grid)
		return (0);
	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(4 * sizeof(int));
		if (!grid[i])
			return (0);
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
