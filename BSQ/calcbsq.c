/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   calcbsq.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/27 10:28:58 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/27 15:20:39 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

void	ft_put_zero(int cols, int rows)
{
	int x;
	int y;

	y = 0;
	while (y < rows)
	{
		x = 0;
		while(x < cols)
		{
			if (g_board[y][x] == g_obstacle)
			{
				g_board[y][x] = '0';
			}
			x++;
		}
		y++;
	}
}

void	ft_put_ones(int cols, int rows)
{
	int x;
	int y;

	y = 0;
	while (y < rows)
	{
		x = 0;
		while(x < cols)
		{
			if (g_board[y][x] == g_empty)
			{
				g_board[y][x] = '1';
			}
			x++;
		}
		y++;
	}
}

// void	ft_put_ones(int cols, int rows)
// {
// 	int x;
// 	int y;

// 	x = 0;
// 	while (x < cols)
// 	{
// 		if (g_board[0][x] == g_empty)
// 		{
// 			g_board[0][x] = '1';
// 		}
// 		x++;
// 	}
// 	y = 0;
// 	while (y < rows)
// 	{
// 		if (g_board[y][0] == g_empty)
// 		{
// 			g_board[y][0] = '1';
// 		}
// 		y++;
// 	}
// }

void	ft_check_value(int x, int y)
{
	char	min;
	char	diagonal;
	char	up;
	char	left;

	diagonal = g_board[y - 1][x - 1];
	up = g_board[y - 1][x];
	left = g_board[y][x - 1];
	if (y > 0 && x > 0)
	{
		if (diagonal <= up && diagonal <= left)
			min = diagonal;
		else if (up <= diagonal && up <= left)
			min = up;
		else
			min = left;
		g_board[y][x] = (min + 1);
	}
}

void	ft_calc_bsq(int cols, int rows)
{
	int x;
	int y;

	y = 1;
	while (y < rows)
	{
		x = 1;
		while (x < cols)
		{
			if (g_board[y][x] != '0')
				ft_check_value(x, y);
			x++;
		}
		y++;
	}
}

int	ft_find_biggest_nr(int cols, int rows)
{
	int x;
	int y;
	char	highest;

	highest = '0';
	y = 0;
	while (y < rows)
	{
		x = 0;
		while(x < cols)
		{
			if (g_board[y][x] > highest)
			{
				highest = g_board[y][x];
				cy = y;
				cx = x;
			}
			x++;
		}
		y++;
	}
	printf("%c\n%d\n%d\n", highest, cy, cx);
	return (highest);
}

// void	ft_print_result(int cols, int rows)
// {
// 	g_board_result[cy][cx] = 'x';
// }