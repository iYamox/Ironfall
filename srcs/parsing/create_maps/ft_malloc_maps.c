/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_maps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:34:05 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 15:51:03 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	ft_malloc_maps(t_game *game)
{
	int	y;

	game->maps.lobby.grid = malloc(game->maps.lobby.height * sizeof(char *)); // On alloue pour la hauteur
	if (!game->maps.lobby.grid)
	{
		write(2, "Allocation maps grid error\n", 28);
		exit(1);
	}

	y = 0;
	while (y < game->maps.lobby.height)
	{
		game->maps.lobby.grid[y] = malloc((game->maps.lobby.width) * sizeof(char)); // On alloue sur chaque ligne la taille necessaire
		if (!game->maps.lobby.grid[y])
		{
			write(2, "Allocation maps grid error\n", 28);
			exit(1);
		}
		y++;
	}
	return ;
}

