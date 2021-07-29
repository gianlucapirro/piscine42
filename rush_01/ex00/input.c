/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/18 20:08:43 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/18 20:18:14 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	*ft_convert_argv(char *argv)
{
	int	*tab;
	int	j;
	int	k;

	tab = malloc(sizeof(int) * 16);
	k = 0;
	j = 0;
	while (argv[j])
	{
		if (argv[j] >= '1' && argv[j] < '5')
		{
			tab[k] = argv[j] - '0';
			k++;
		}
		j++;
	}
	return (tab);
}

int	ft_check_argv(char *argv, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (j % 2 == 0 && (argv[i] < '0' || argv[i] > '5'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (j % 2 == 1 && argv[i] != ' ')
		{
			ft_putstr("Error\n");
			return (0);
		}
		j = j + 1;
		i++;
	}
	return (1);
}
