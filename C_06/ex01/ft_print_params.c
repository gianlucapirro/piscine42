/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/21 14:20:35 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/22 11:56:50 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	while (argc > j)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
