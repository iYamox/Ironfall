/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_tile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:39:21 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:45:39 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	render_tile(t_game *game, char title, int y, int x)
{
	mlx_image_t	*img;

	img = game->terrain_img.floor;
	if (img)
		mlx_image_to_window(game->mlx, img, x * TILE_SIZE, y * TILE_SIZE);
		
	if (title == 'W')
		img = game->terrain_img.water;
	else if (title == '0')
		img = game->terrain_img.floor;
	else if (title == '7')
		img = game->terrain_img.top_left_wall;
	else if (title == '8')
		img = game->terrain_img.top_wall;
	else if (title == '9')
		img = game->terrain_img.top_right_wall;
	else if (title == '6')
		img = game->terrain_img.right_wall;
	else if (title == '3')
		img = game->terrain_img.down_right_wall;
	else if (title == '2')
		img = game->terrain_img.down_wall;
	else if (title == '1')
		img = game->terrain_img.down_left_wall;
	else if (title == '4')
		img = game->terrain_img.left_wall;
	else if (title == 'E')
		img = game->terrain_img.eglise;
	else if (title == 'T')
		img = game->terrain_img.tree;
	else if (title == 'H')
		img = game->terrain_img.house;
	else if (title == 'P')
		img = game->player.img.idle.idle0;

	if (img)
		mlx_image_to_window(game->mlx, img, x * TILE_SIZE, y * TILE_SIZE);
}
