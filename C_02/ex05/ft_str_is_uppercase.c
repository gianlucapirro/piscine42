/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 16:52:14 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/13 19:48:59 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	no_uppercase;

	no_uppercase = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			no_uppercase++;
		}
		i++;
	}
	if (no_uppercase)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
