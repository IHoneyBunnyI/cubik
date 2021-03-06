/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvernon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:45:26 by rvernon           #+#    #+#             */
/*   Updated: 2021/03/08 14:31:32 by rvernon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	free_first(t_all *all)
{
	free(all->plr);
	free(all->tex->so);
	free(all->tex->we);
	free(all->tex->no);
	free(all->tex->ea);
	free(all->tex->spr);
	free(all->tex);
	free(all->clr);
	free(all->img);
	free(all->hook);
	free(all->north);
	free(all->south);
	free(all->west);
	free(all->east);
	free(all->win->mlx);
	free(all->win);
	free(all->z_buf);
}

void	free_all(t_all *all)
{
	int i;

	i = 0;
	free_first(all);
	if (all->map != 0)
	{
		while (all->map[i])
			free(all->map[i++]);
		free(all->map);
	}
}
