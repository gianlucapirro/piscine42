/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsq.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/27 10:32:33 by gpirro        #+#    #+#                 */
/*   Updated: 2021/07/27 15:20:43 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
char    **g_board;
char    **g_board_result;
int     cy;
int     cx;
char	g_empty;
char	g_full;
char	g_obstacle;
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int 	ft_atoi(char *str);
void	ft_put_ones(int cols, int rows);
void	ft_put_zero(int cols, int rows);
void	ft_check_value(int x, int y);
void	ft_calc_bsq(int cols, int rows);
int	    ft_find_biggest_nr(int cols, int rows);
int	    *ft_char_to_int(char *storage);
void	ft_print_result(int cols, int rows);

#endif
