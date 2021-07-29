/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 10:26:01 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/15 13:31:26 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
	dest[i] = '\0';
    return (dest);
}

int main(void)
{
	char	dest[] = "hellothere!";
	char	src[] = "testghghdfghdfghdfgh";
	
	ft_strncpy (dest, src, 15);
	printf("%s", dest);
	return (0);
}