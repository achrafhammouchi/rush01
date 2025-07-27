// is_valid.c

int	is_valid(int **grid, int row, int col, int num)
{
	int	i;
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
    
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == num)
			return (0); 
		i++;
	}

	return (1); 
}
