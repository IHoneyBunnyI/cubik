/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvernon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:30:30 by rvernon           #+#    #+#             */
/*   Updated: 2021/03/08 13:37:06 by rvernon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static	void	init_tex(t_tex *tex)
{
	tex->no = 0;
	tex->so = 0;
	tex->we = 0;
	tex->ea = 0;
	tex->spr = 0;
}

static	void	init_win(t_win *win)
{
	win->w = 0;
	win->h = 0;
	win->mlx = 0;
	win->win = 0;
}

static	void	init_plr_first(t_plr *plr)
{
	plr->x = 0.0;
	plr->y = 0.0;
	plr->dir_x = 0;
	plr->dir_y = 0;
	plr->plane_x = 0;
	plr->plane_y = 0;
	plr->camera_x = 0;
	plr->ray_dir_x = 0;
	plr->ray_dir_y = 0;
	plr->side_dist_x = 0;
	plr->delta_dist_x = 0;
	plr->delta_dist_y = 0;
	plr->side_dist_y = 0;
	plr->perp_wall_dist = 0;
	plr->line_height = 0;
	plr->draw_start = 0;
	plr->draw_end = 0;
	plr->step_x = 0;
	plr->step_y = 0;
	plr->hit = 0;
	plr->side = 0;
	plr->map_x = 0;
	plr->map_y = 0;
	plr->move_speed = 0.05;
}

static	void	init_plr(t_plr *plr)
{
	init_plr_first(plr);
	plr->tex_num = 0;
	plr->wall_x = 0;
	plr->tex_x = 0;
	plr->step = 0;
	plr->tex_pos = 0;
	plr->tex_y = 0;
}

static	void	init_clr(t_clr *clr)
{
	clr->f_r = -1;
	clr->f_g = -1;
	clr->f_b = -1;
	clr->c_r = -1;
	clr->c_g = -1;
	clr->c_b = -1;
}

static	void	init_hook(t_hook *hook)
{
	hook->esc = 0;
	hook->w = 0;
	hook->a = 0;
	hook->s = 0;
	hook->d = 0;
	hook->left = 0;
	hook->right = 0;
	hook->shift = 0;
}

static	void	init_textures(t_textures *t)
{
	t->img_data = 0;
	t->img_ptr = 0;
	t->data = 0;
	t->line_len = 0;
	t->endian = 0;
	t->width = 0;
	t->height = 0;
	t->bpp = 0;
}

static	void	init_sprite(t_sprite *s)
{
	s->num_sprites = 0;
	s->spr_order = 0;
	s->spr_dist = 0;
	s->spr_x = 0;
	s->spr_y = 0;
	s->inv_det = 0;
	s->transform_x = 0;
	s->transform_y = 0;
	s->spr_screen_x = 0;
	s->spr_h = 0;
	s->dr_start_y = 0;
	s->dr_end_y = 0;
	s->spr_w = 0;
	s->dr_start_x = 0;
	s->dr_end_x = 0;
	s->stripe = 0;
	s->tex_x = 0;
	s->tex_y = 0;
	s->d = 0;
	s->y = 0;
	s->color = 0;
}

static	void	init_img(t_img *img)
{
	img->img = 0;
	img->addr = 0;
	img->bpp = 0;
	img->line_len = 0;
	img->endian = 0;
}

static	void	all_malloc(t_all *all)
{
	all->win = malloc(sizeof(t_win) * 1);
	all->plr = malloc(sizeof(t_plr) * 1);
	all->tex = malloc(sizeof(t_tex) * 1);
	all->clr = malloc(sizeof(t_clr) * 1);
	all->img = malloc(sizeof(t_img) * 1);
	all->hook = malloc(sizeof(t_hook) * 1);
	all->north = malloc(sizeof(t_textures) * 1);
	all->south = malloc(sizeof(t_textures) * 1);
	all->west = malloc(sizeof(t_textures) * 1);
	all->sprite = malloc(sizeof(t_textures) * 1);
	all->east = malloc(sizeof(t_textures) * 1);
	all->sprr = malloc(sizeof(t_sprite) * 1);
}

void			init_all(t_all *all)
{
	all_malloc(all);
	init_win(all->win);
	init_plr(all->plr);
	init_tex(all->tex);
	init_clr(all->clr);
	init_img(all->img);
	init_hook(all->hook);
	init_textures(all->north);
	init_textures(all->south);
	init_textures(all->west);
	init_textures(all->sprite);
	init_textures(all->east);
	init_sprite(all->sprr);
	all->spr = 0;
	all->map = 0;
	all->map_w = 0;
	all->map_h = 0;
	all->z_buf = 0;
	all->screen = 0;
}

void			init_key(t_key *key)
{
	key->r = 1;
	key->no = 1;
	key->so = 1;
	key->we = 1;
	key->ea = 1;
	key->s = 1;
	key->f = 1;
	key->c = 1;
	key->flag = 0;
}
