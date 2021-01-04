/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasimbaybikov <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 22:36:17 by kasimbayb         #+#    #+#             */
/*   Updated: 2021/01/04 20:48:54 by kasimbayb        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "../mlx/mlx.h"
# include "../libft/includes/libftprintf.h"
# include "../libft/get_next_line.h"
# include <fcntl.h>

# define RECT 20

typedef struct s_win
{
    int width;
    int height;
	void *mlx;
	void *win;
}               t_win;

typedef struct s_plr
{
	int x;
	int y;
	int a;
}				t_plr;

typedef struct	s_all
{
	t_win *win;
	t_plr *plr;
	char **map;
}				t_all;
/*
    **Color
*/
int		get_trgb(int t, int r, int g, int b);
int		get_t(int trgb);
int		get_r(int trgb);
int		get_g(int trgb);
int		get_b(int trgb);
void ft_error(int error);
/*
    **Inits
*/
void	init_window(t_win *window);
void	init_all(t_all *all);
/*
    **Get map
*/
void	get_lstmap(int fd, t_all *all);
void	get_map(int size, t_list *lstmap, t_all *all);
int		pos_player(char **map, int i, int j);
/*
    **Draw
*/
void	draw_map(char **map);
void	draw_pix(t_win *window, int rectsize, int i, int j, int color);

#endif
