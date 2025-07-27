// main.c
#include <unistd.h>
#include <rush01.h>

int	main(int argc, char **argv)
{
	int	**grid;
	int	views[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!parse_input(argv[1], views))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	grid = allocate_grid();
	if (!grid)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve(grid, views, 0, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free_grid(grid);
	return (0);
}
