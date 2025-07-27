//solve.c
int	is_valid(int **grid, int row, int col, int num);
int	is_complete(int **grid);
int	check_views(int **grid, int *views);

int	solve(int **grid, int *views)
{
	int	row;
	int	col;
	int	num;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (grid[row][col] == 0)
			{
				num = 1;
				while (num <= 4)
				{
					if (is_valid(grid, row, col, num))
					{
						grid[row][col] = num;
						if (solve(grid, views)) 
							return (1);
						grid[row][col] = 0;
					}
					num++;
				}
				return (0); 
			}
			col++;
		}
		row++;
	}
	if (is_complete(grid) && check_views(grid, views))
		return (1);
	return (0);
}
