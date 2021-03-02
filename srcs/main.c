/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvernon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:45:17 by rvernon           #+#    #+#             */
/*   Updated: 2021/03/02 14:17:24 by rvernon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
	t_all all;

	if (ac == 1)
	{
		ft_printf("\033[31mERROR: invalid argument\n\033[0m");
		exit(1);
	}
	else if (ac == 2 && check_map_name(av[1], &all) == 1)
		start(av[1], &all);
	sleep(3);
	//else if (argc == 3 && check_map_name(av[2]) == 1)
	//	screen(av[2]);
}
