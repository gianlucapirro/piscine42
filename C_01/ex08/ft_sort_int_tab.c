/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/11 17:00:49 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/11 17:00:51 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	fc;
	int	sc;

	fc = 0;
	while (fc < size - 1)
	{
		sc = 0;
		while (sc < size - fc - 1)
		{
			if (tab[sc] > tab[sc + 1])
			{
				ft_swap(&tab[sc], &tab[sc + 1]);
			}
			sc ++;
		}
		fc ++;
	}
}
