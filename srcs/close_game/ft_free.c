/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:43:52 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 15:35:25 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Ironfall.h"

void	free_split(t_map *map)
{
	int	j;

	j = 0;
	while(map->grid[j])
		free(map->grid[j++]);
}

void	free_grid_maps(t_all_maps *maps)
{
	if (&maps->lobby)
		free_split(&maps->lobby);
}

void	ft_free(t_game *game)
{
	free_grid_maps(&game->maps);
}
