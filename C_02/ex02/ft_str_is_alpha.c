/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 11:11:45 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/13 15:21:02 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	uppercase;
	int	lowercase;

	uppercase = 0;
	lowercase = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			uppercase++;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			lowercase++;
		}
		i++;
	}
	if ((i == 0) || (uppercase && lowercase))
	{
		return (1);
	}
	return (0);
}
