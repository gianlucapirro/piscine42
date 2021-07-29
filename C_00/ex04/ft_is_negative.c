/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/08 16:59:41 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/10 15:14:27 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	t;

	t = 'P';
	p = 'N';
	if (n >= 0)
	{
		write(1, &t, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
