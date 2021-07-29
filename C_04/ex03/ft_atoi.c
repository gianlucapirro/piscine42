/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/20 11:10:07 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/23 11:26:20 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_if_negative(char *str)
{
	int	counter;
	int	negative;

	counter = 0;
	negative = 0;
	while (str[counter])
	{
		if (str[counter] == '-')
			negative++;
		counter++;
	}
	counter = 0;
	if (negative % 2 == 1)
		return (-1);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nr;
	int	neg;

	i = 0;
	nr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
	str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	neg = ft_check_if_negative(str);
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nr = nr * 10;
		nr = nr + (int)(str[i] - '0');
		i++;
	}
	return (nr * neg);
}

int main(void)
{
	printf("%d", ft_atoi("--120"));
}