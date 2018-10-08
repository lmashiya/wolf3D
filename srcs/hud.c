/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 08:39:40 by lmashiya          #+#    #+#             */
/*   Updated: 2017/11/20 08:49:07 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	help_text(t_wolf3d *t)
{
	mlx_string_put(t->mlx, t->win, 10, 10,
			0xEEEEEE, "Press W A S D or the arrow keys to move.");
	mlx_string_put(t->mlx, t->win, 10, 30, 0xEEEEEE, "Enjoy yourself");
	mlx_string_put(t->mlx, t->win, 10, 50,
			0xEEEEEE, "Press ESC to quit");
	mlx_string_put(t->mlx, t->win, 10, 70,
			0xEEEEEE, " ");
	mlx_string_put(t->mlx, t->win, 10, 90,
			0xEEEEEE, " ");
	mlx_string_put(t->mlx, t->win, 10, 110,
			0xEEEEEE, "Press ESC to quit.");
}
