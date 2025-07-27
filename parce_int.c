// parse_input.c
int	parse_input(char *input, int *views)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (input[i])
	{
		while (input[i] == ' ')
			i++;
		if (input[i] >= '1' && input[i] <= '4')
		{
			if (j >= 16)
				return (0);
			views[j] = input[i] - '0';
			j++;
			i++;
		}
		else
			return (0);
	}
	if (j != 16)
		return (0);
	return (1);
}