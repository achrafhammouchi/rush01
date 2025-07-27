// free_grid.c
#include <stdlib.h>

void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]); 
		i++;
	}
	free(grid); 
}
