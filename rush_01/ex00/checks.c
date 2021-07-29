/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/18 20:07:09 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/18 20:15:11 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	check_dup(int *a)
{
	if (a[0] == a[1] || a[0] == a[3] || a[0] == a[2])
	{
		return (1);
	}
	if (a[1] == a[2] || a[1] == a[3])
		return (1);
	if (a[2] == a[3])
		return (1);
	return (0);
}

int	is_start_possible(int *solutions, int start)
{
	int	highest;
	int	x;
	int	c;

	x = 0;
	c = 0;
	highest = 0;
	while (x < 4)
	{
		if (solutions[x] > highest)
		{
			highest = solutions[x];
			c++;
		}
		x++;
	}
	if (c != start)
		return (0);
	else
		return (1);
}

int	is_end_possible(int *solutions, int end)
{
	int	highest;
	int	x;
	int	c;

	x = 3;
	c = 0;
	highest = 0;
	while (x >= 0)
	{
		if (solutions[x] > highest)
		{
			highest = solutions[x];
			c++;
		}
		x--;
	}
	if (c != end)
		return (0);
	else
		return (1);
}

int	is_poss(int sol[4], int start, int end)
{
	if (is_start_possible(sol, start) != 1)
	{
		return (0);
	}
	if (is_end_possible(sol, end) != 1)
	{		
		return (0);
	}
	return (1);
}
