/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:51:09 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 15:51:00 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	fill_map(char **map, t_game *game)
{
	int	x;
	int	y;

	while (map[y])
		y++;
	game->maps.lobby.height = y;
	while (map[0][x])
		x++;
	game->maps.lobby.width = x;

	ft_malloc_maps(game);
	
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			game->maps.lobby.grid[y][x] = map[y][x];
			x++;
		}
		y++;
	}
	return ;
}
