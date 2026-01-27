/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   genere_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:51:09 by amary             #+#    #+#             */
/*   Updated: 2026/01/27 20:26:57 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	genere_map(char **map, t_game *game)
{
	int	x;
	int	y;

	ft_malloc_map(map, game);
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
	printf("%d", y);
	printf("\n%d", x);
}
