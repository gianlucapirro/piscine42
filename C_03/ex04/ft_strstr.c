/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/15 12:35:21 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/19 11:39:22 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	not_equal;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			not_equal = 0;
			while (to_find[i])
			{
				if (to_find[i] != str[i])
					not_equal++;
				i++;
			}
			if (not_equal == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
