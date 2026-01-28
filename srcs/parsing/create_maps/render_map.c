/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:54:05 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:31:30 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	render_map(t_game *game, t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			render_tile(game, map->grid[y][x], y, x);
			x++;
		}
		y++;
	}
}
