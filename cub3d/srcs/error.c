/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasimbaybikov <marvin@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:26:57 by kasimbayb         #+#    #+#             */
/*   Updated: 2021/02/15 15:34:01 by kasimbayb        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	error(int error)
{
	if (error == 1)
		ft_printf("\033[31mERROR: invalid file name\n\033[0m");
}
