/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/21 13:02:44 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/21 16:22:54 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrtfinder(int nb, int min, int max)
{
	int	guess;

	guess = (min + max) / 2;
	if (guess > 46340)
		return (0);
	if (max < min)
		return (0);
	if (guess * guess == nb)
		return (guess);
	else if (guess * guess < nb)
		return (ft_sqrtfinder(nb, guess + 1, max));
	else
		return (ft_sqrtfinder(nb, min, guess - 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrtfinder(nb, 1, nb));
}
