// print_grid.c
//#include <unistd.h>

void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1); 
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
