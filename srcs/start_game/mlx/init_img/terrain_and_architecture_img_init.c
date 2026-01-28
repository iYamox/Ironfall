/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terrain_and_architecture_img_init.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:53:06 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:42:27 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/Ironfall.h"

void	terrain_and_architecture_img_init(t_game *game)
{
	game->terrain_img.water = mlx_texture_to_image(game->mlx, game->terrain_texture.water);
	game->terrain_img.top_left_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.top_left_wall);
	game->terrain_img.top_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.top_wall);
	game->terrain_img.top_right_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.top_right_wall);
	game->terrain_img.right_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.right_wall);
	game->terrain_img.left_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.left_wall);
	game->terrain_img.down_left_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.down_left_wall);
	game->terrain_img.down_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.down_wall);
	game->terrain_img.down_right_wall = mlx_texture_to_image(game->mlx, game->terrain_texture.down_right_wall);
	game->terrain_img.floor = mlx_texture_to_image(game->mlx, game->terrain_texture.floor);
	game->terrain_img.eglise = mlx_texture_to_image(game->mlx, game->terrain_texture.eglise);
	game->terrain_img.house = mlx_texture_to_image(game->mlx, game->terrain_texture.house);
	game->terrain_img.archery = mlx_texture_to_image(game->mlx, game->terrain_texture.archery);
}
