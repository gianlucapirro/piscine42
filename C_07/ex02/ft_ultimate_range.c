/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/22 19:12:27 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/25 11:19:52 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (len));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}

// int	main(void)
// {
// 	int	*range;
// 	int	i;

// 	i = 0;
// 	printf("%d\n", ft_ultimate_range(&range, -1, 5));
// 	while (i < 6)
// 	{
// 		printf("%d", range[i]);
// 		i++;
// 	}
// 	return (0);
// }