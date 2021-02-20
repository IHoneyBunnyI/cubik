/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasimbaybikov <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:26:57 by kasimbayb         #+#    #+#             */
/*   Updated: 2021/02/20 10:39:19 by rvernon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	error(int error)
{
	if (error == 1)
		ft_printf("\033[31mERROR: invalid file name\n\033[0m");
	else if (error == 2)
		ft_printf("\033[31mERROR: file cannot be opened\n\033[0m");
	else if (error == 3)
		ft_printf("\033[31mERROR: invalid argument\n\033[0m");
	else if (error == 4)
		ft_printf("\033[32mERROR: continue\n\033[0m");
	exit(1);

}
