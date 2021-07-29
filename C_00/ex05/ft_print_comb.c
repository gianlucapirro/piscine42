/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/08 17:00:09 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/10 15:21:37 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_make_combi(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_make_combi (a, b, c);
				c ++;
			}
			b ++;
		}
		a ++;
	}
}
