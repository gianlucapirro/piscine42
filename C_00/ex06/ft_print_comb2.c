/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/08 10:02:12 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/10 15:20:13 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int nr)
{
	char	f;
	char	s;

	if (nr <= 9)
	{
		f = '0';
		s = '0' + nr;
		write(1, &f, 1);
		write(1, &s, 1);
	}
	else
	{
		f = '0' + nr / 10;
		s = '0' + nr % 10;
		write(1, &f, 1);
		write(1, &s, 1);
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 99)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_write_number(f);
			write(1, " ", 1);
			ft_write_number(s);
			if (f != 98 || s != 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}	
			s++;
		}
		f++;
	}
}
