/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/22 10:34:42 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/23 12:15:34 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char			*new_array;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	new_array = (char *)malloc(sizeof(char) * len + 1);
	if (new_array == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		new_array[i] = src[i];
		i++;
	}
	new_array[i] = '\0';
	return (new_array);
}
