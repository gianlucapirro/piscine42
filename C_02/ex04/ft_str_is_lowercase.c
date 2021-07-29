/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 15:41:13 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/13 19:49:03 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	no_lowercase;

	no_lowercase = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			no_lowercase++;
		}
		i++;
	}
	if (no_lowercase)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
