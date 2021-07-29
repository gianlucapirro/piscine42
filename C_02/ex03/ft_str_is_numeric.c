/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 15:23:28 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/13 19:53:43 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	no_digit;

	no_digit = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			no_digit++;
		}
		i++;
	}
	if ((no_digit))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
