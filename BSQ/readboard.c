/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   readboard.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/25 19:46:27 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/26 12:110:32 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "bsq.h"

char	*ft_read_file(char *filename)
{
	int		fd;
	char	*storage;
	int 	size;
	char	ch;
	
	size = 1;
	fd = open(filename, O_RDONLY);
	while (read(fd, &ch, 1) != 0)
		size++;
	close(fd);
	// wat hij leest uit de file slaat hij op in storage
	storage = malloc(sizeof(char) * size);
	fd = open(filename, O_RDONLY);
	read(fd, storage, size);
	return (storage);
}

void	ft_empty_obstacle_full(char *storage)
{
	int i;

	i = 0;
	while (storage[i] != '\n')
		i++;
	g_empty = storage[i - 3];
	g_obstacle = storage[i - 2];
	g_full = storage[i - 1];
}

int	ft_calc_rows(char *storage)
{
	int 	i;
	int 	i2;
	char	*i_lines;

	i = 0;
	while (storage[i] != '\n')
		i++;
	i_lines = malloc(sizeof(char) * (i - 2));
	// gaat naar einde new line eigenlijk -3 maar we doen -2 omdat +1 voor \0
	i2 = 0;
	while (i2 < (i - 3))
	{
		i_lines[i2] = storage [i2];
		i2++;
	}
	i_lines[i2] = '\0';
	i2 = ft_atoi(i_lines);
	return (i2);
}
// we weten nu hoeveel lines we moeten lezen

int	ft_calc_columns(char *storage)
{
	int i;

	i = 0;
	while (*storage != '\n')
		storage++;
	storage++;
	// loop tot eerste newline (van de bovenste line)
	while (storage[i] != '\n')
		i++;
	return (i);
	// nu heb je de lengte van de tweede line (en dus het aantal colums)
}

void ft_twod_array(char *storage, int cols, int rows)
{
	int 	i;
	int 	x;
	int 	y;
	int		k;

	y = 0;
	i = 0;
	g_board = malloc((ft_calc_columns(storage) + 1 ) * rows);
	while (storage[i] != '\n')
		i++;
	i++;
	k = 0;
	while (k < rows)
	{
		x = 0;
		g_board[k] = malloc(ft_calc_columns(storage) + 1);
		while (storage[i] != '\n')
		{	
			g_board[k][x] = storage[i];
			i++;
			x++;
		}
		i++;
		k++;
	}
}

void ft_twod_array_result(char *storage, int cols, int rows)
{
	int 	i;
	int 	x;
	int 	y;
	int		k;

	y = 0;
	i = 0;
	g_board_result = malloc((ft_calc_columns(storage) + 1 ) * rows);
	while (storage[i] != '\n')
		i++;
	i++;
	k = 0;
	while (k < rows)
	{
		x = 0;
		g_board_result[k] = malloc(ft_calc_columns(storage) + 1);
		while (storage[i] != '\n')
		{	
			g_board_result[k][x] = storage[i];
			i++;
			x++;
		}
		i++;
		k++;
	}
}

// we maken een malloc voor het aantal columns en dan stoppen we in elke column een pointer naar een malloc van de row dan krijg je een 2d array
char **ft_read_board(int cols, int rows, char *storage)
{
	int		i;
	char	**board = malloc(sizeof(char *) * rows);
	// hier pointer char omdat het point naar de malloc van de row

	i = 0;
	while (i < rows)
	{
		board[i] = malloc(sizeof(char) * cols);
	}
	return (board);
}

int	main(int argc, char **argv)
{
	char *storage = ft_read_file(argv[1]);
	ft_empty_obstacle_full(storage);
	int	rows = ft_calc_rows(storage);
	int	cols = ft_calc_columns(storage);
	ft_twod_array(storage, cols, rows);
	ft_twod_array_result(storage, cols, rows);
 	ft_put_ones(cols, rows);
	ft_put_zero(cols, rows);
	ft_calc_bsq(cols, rows);
	ft_find_biggest_nr(cols , rows);
	// ft_print_result(cols, rows);

		printf("%s\n", storage);
		printf("2dstorage:\n");
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
			printf("%c", g_board_result[i][j]);
		printf("\n");
	}
	printf("TURNED INTO ones and zeros\n");
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
			printf("%c", g_board[i][j]);
		printf("\n");
	}
}
