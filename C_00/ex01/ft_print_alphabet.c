/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/08 16:58:54 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/08 16:58:58 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	variable1;

	variable1 = 'a';
	while (variable1 <= 'z')
	{
		write(1, &variable1, 1);
		variable1 ++;
	}
}
