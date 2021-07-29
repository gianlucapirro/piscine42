/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/08 16:59:23 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/08 17:03:20 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	variable1;

	variable1 = 'z';
	while (variable1 >= 'a')
	{
		write(1, &variable1, 1);
		variable1 --;
	}
}
