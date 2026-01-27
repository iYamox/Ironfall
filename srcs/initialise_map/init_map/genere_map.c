/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   genere_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:51:09 by amary             #+#    #+#             */
/*   Updated: 2026/01/27 20:15:34 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	genere_map(char **map, t_game *game)
{
	int	x;
	int	y;

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
	game->maps.lobby.height = y;
	game->maps.lobby.width = x;
	printf("%d", y);
	printf("\n%d", x);
}
