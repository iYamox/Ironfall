/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:02:34 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:38:21 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Ironfall.h"

void	start_game(t_game *game)
{
	if (!init_mlx(game))
	{
		write(2, "initialisation mlx error\n", 26);
		exit(1);
	}
	render_map(game, &game->maps.lobby);
	mlx_loop(game->mlx);
}
