/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   backtracking.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/18 18:20:17 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/20 14:34:21 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		check_dup(int *a);
int		is_start_possible(int *solutions, int start);
int		is_end_possible(int *solutions, int end);
int		is_poss(int sol[4], int start, int end);
void	ft_print_board(int r1, int r2, int r3, int r4);

int	g_poss[24][4];

int	ft_checkvertical_last_two(int *int_input, int counters[4])
{
	int	column[4];

	column[0] = g_poss[counters[0]][2];
	column[1] = g_poss[counters[1]][2];
	column[2] = g_poss[counters[2]][2];
	column[3] = g_poss[counters[3]][2];
	if (is_poss(column, int_input[2], \
	int_input[6]) != 1 || check_dup(column) == 1)
		return (0);
	column[0] = g_poss[counters[0]][3];
	column[1] = g_poss[counters[1]][3];
	column[2] = g_poss[counters[2]][3];
	column[3] = g_poss[counters[3]][3];
	if (is_poss(column, int_input[3], \
	int_input[7]) != 1 || check_dup(column) == 1)
		return (0);
	return (1);
}

int	ft_checkvertical(int *int_input, int counters[4])
{
	int	column[4];
	// counter [y][x] eerste getal dat je overhoud na ft_backtracking
	column[0] = g_poss[counters[0]][0];
	column[1] = g_poss[counters[1]][0];
	column[2] = g_poss[counters[2]][0];
	column[3] = g_poss[counters[3]][0];
	if (is_poss(column, int_input[0], int_input[4]) \
	!= 1 || check_dup(column) == 1)
		return (0);
	column[0] = g_poss[counters[0]][1];
	column[1] = g_poss[counters[1]][1];
	column[2] = g_poss[counters[2]][1];
	column[3] = g_poss[counters[3]][1];
	if (is_poss(column, int_input[1], int_input[5]) \
	!= 1 || check_dup(column) == 1)
		return (0);
	if (ft_checkvertical_last_two(int_input, counters) == 0)
		return (0);
	ft_print_board(counters[0], counters[1], counters[2], counters[3]);
	return (1);
}

int	ft_backtracking_2(int counters[4], int int_input[16])
{
	int	counters[4];

	while (counters[2] < 24)
	{
		counters[3] = 0;
		if (is_poss(g_poss[counters[2]], int_input[10], int_input[14]) == 1)
		{	
			while (counters[3] < 24)
			{
				if (is_poss(g_poss[counters[3]], int_input[11], int_input[15]) == 1)
				{
					counters[0] = counters[0];
					counters[1] = counters[1];
					counters[2] = counters[2];
					counters[3] = counters[3];
					// Je hebt nu 4 getallen van het nummer ingevulde possibilities
					if (ft_checkvertical(int_input, counters) == 1)
						return (1);
				}
				counters[3]++;
			}
		}
		counters[2]++;
	}
	return (0);
}

int	ft_backtracking(int *int_input)
{
	int	counters[4];

	while (counters[0] < 24)
	{
		counters[1] = 0;
		if (is_poss(g_poss[counters[0]], int_input[8], int_input[12]) == 1)
		{
			while (counters[1] < 24)
			{
				counters[2] = 0;
				if (is_poss(g_poss[counters[1]], int_input[9], int_input[13]) == 1)
				{
					if (ft_backtracking_2(counters, int_input) == 1)
					{
						return (1);
					}
				}
				counters[1]++;
			}
		}
		counters[0]++;
	}
	return (0);
}
