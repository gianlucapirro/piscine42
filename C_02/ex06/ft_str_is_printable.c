/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 17:00:36 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/13 19:49:56 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	not_printable;

	not_printable = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			not_printable++;
		}
		i++;
	}
	if (not_printable)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
