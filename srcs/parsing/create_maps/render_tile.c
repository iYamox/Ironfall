/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_tile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:39:21 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 15:51:11 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	render_tile(t_game *game, char title, int y, int x)
{
	if (title == 'W')
		mlx_image_to_window(game->mlx, game->terrain_img.water, x * 96, y * 96);
}
