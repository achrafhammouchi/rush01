// is_complete.c

int	is_complete(int **grid)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (grid[row][col] == 0)
				return (0); 
			col++;
		}
		row++;
	}
	return (1);
}
