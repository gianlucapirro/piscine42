/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/22 14:19:38 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/23 12:16:39 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

// int main(void)
// {
// 	int	*str;
// 	str = ft_range(-10, 20);
// 	int i;
// 	int min;
// 	int max;

// 	min = -10;
// 	max = 20;
// 	i = 0;
// 	while (min < max)
// 	{
// 		printf("%i", str[i]);
// 		i++;
// 		min++;
// 	}
// }
