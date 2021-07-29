/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/23 12:42:17 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/25 13:37:03 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	if (size == 0)
	{
		return (1);
	}
	while (i < size)
	{
		len = ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_len;

	total_len = ft_total_length(size, strs, sep);
	str = malloc(sizeof(char) * total_len);
	if (total_len == 1)
	{
		*str = 0;
		return (0);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char *strs[3] = {
//                 "zero", 
//                 "one", 
//                 "two"
//                 };

//     printf("%s", ft_strjoin(3, strs, ","));
// }