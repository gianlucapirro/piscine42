/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/18 20:09:46 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/19 15:26:49 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char a);
void	ft_putstr(char *str);
char	ft_convert_char(int a);
void	ft_print_line(int one, int two, int three, int four);
int		ft_strlen(char *str);
int		*ft_convert_argv(char *argv);
int		ft_check_argv(char *argv, int len);
void	ft_putchar(char a);
char	ft_convert_char(int a);
void	ft_print_line(int one, int two, int three, int four);
void	ft_print_board(int r1, int r2, int r3, int r4);
int		ft_backtracking(int *int_input);

int	g_array[4][4] = {{0}};
int	g_poss[24][4] = {
// {1, 2, 3, 4},
{1, 2, 4, 3},
{1, 3, 2, 4},
{1, 3, 4, 2},
{1, 4, 2, 3},
{1, 4, 3, 2},
{2, 1, 3, 4},
{2, 1, 4, 3},
// {2, 3, 4, 1},
{2, 3, 1, 4},
{2, 4, 1, 3},
{2, 4, 3, 1},
{3, 1, 2, 4},
{3, 1, 4, 2},
{3, 2, 1, 4},
{3, 2, 4, 1},
// {3, 4, 1, 2},
{3, 4, 2, 1},
// {4, 1, 2, 3},
{4, 1, 3, 2},
{4, 2, 1, 3},
{4, 2, 3, 1},
{4, 3, 1, 2},
{4, 3, 2, 1}
};

int	main(int argc, char **argv)
{
	int	valid;
	int	*int_input;
	int	count;
	int	len;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	count = 16;
	int_input = ft_convert_argv(argv[1]);
	len = ft_strlen(argv[1]);
	if (len != 31)
	{
		ft_putstr("Error\n");
		return (0);
	}
	valid = ft_check_argv(argv[1], len);
	if (valid == 0 || ft_backtracking(int_input) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
}
