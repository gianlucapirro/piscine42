/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 09:20:38 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/15 17:51:15 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char	dest[] = "hellosdfgsdfgsdf";
	char	src[] = "test";
	
	ft_strcpy (dest, src);
	printf("%s", dest);
	return (0);
}