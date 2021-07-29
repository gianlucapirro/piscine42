void	top(int null1, int x)
{
	if (null1 == 0)
	{
		ft_putchar('A');
	}
	else if (null1 == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	bottom(int null1, int x)
{
	if (null1 == 0)
	{
		ft_putchar('C');
	}
	else if (null1 == x - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}	
}

void	middle(int null1, int x)
{
	if (null1 == 0 || null1 == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	top_middle_bottom(int null1, int null2, int x, int y)
{
	if (null2 == 0)
	{
		top(null1, x);
	}
	else if (null2 == y - 1)
	{
		bottom(null1, x);
	}
	else
	{
		middle(null1, x);
	}
}

void	rush(int x, int y)
{
	int	null1;
	int	null2;

	null1 = 0;
	null2 = 0;
	while (null2 < y)
	{
		null1 = 0;
		while (null1 < x)
		{
			top_middle_bottom(null1, null2, x, y);
			null1 ++;
		}		
		ft_putchar('\n');
		null2 ++;
	}
}
