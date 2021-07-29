/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printing.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/18 19:00:36 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/18 20:38:15 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	g_poss[24][4];

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i ++;
	}
}

char	ft_convert_char(int a)
{
	return (a + '0');
}

void	ft_print_line(int one, int two, int three, int four)
{
	char	tmp;

	tmp = one + '0';
	write(1, &tmp, 1);
	write(1, " ", 1);
	tmp = two + '0';
	write(1, &tmp, 1);
	write(1, " ", 1);
	tmp = three + '0';
	write(1, &tmp, 1);
	write(1, " ", 1);
	tmp = four + '0';
	write(1, &tmp, 1);
	write(1, "\n", 1);
}

void	ft_print_board(int r1, int r2, int r3, int r4)
{
	ft_print_line(g_poss[r1][0], g_poss[r1][1], g_poss[r1][2], g_poss[r1][3]);
	ft_print_line(g_poss[r2][0], g_poss[r2][1], g_poss[r2][2], g_poss[r2][3]);
	ft_print_line(g_poss[r3][0], g_poss[r3][1], g_poss[r3][2], g_poss[r3][3]);
	ft_print_line(g_poss[r4][0], g_poss[r4][1], g_poss[r4][2], g_poss[r4][3]);
}
