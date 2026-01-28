/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:04:27 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:00:35 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

bool	init_mlx(t_game *game)
{
	game->mlx = mlx_init(1980, 1080,"Ironfall", false);
	if (!game->mlx)
		return (false);
	init_texture(game);
	create_img(game);
	return (true);
}
