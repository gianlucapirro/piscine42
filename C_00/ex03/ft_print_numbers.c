/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/08 16:59:33 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/08 20:07:55 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	variable1;

	variable1 = '0';
	while (variable1 <= '9')
	{
		write (1, &variable1, 1);
		variable1 ++;
	}
}
