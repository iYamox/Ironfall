/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terrain_and_architecture_texture_init.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:13:12 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 16:44:18 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/Ironfall.h"

void	terrain_and_architecture_texture_init(t_game *game)
{
	game->terrain_texture.water = mlx_load_png("assets/Terrain/Water.png");
	game->terrain_texture.top_left_wall = mlx_load_png("assets/Terrain/Top_left_wall.png");
	game->terrain_texture.top_wall = mlx_load_png("assets/Terrain/Top_wall.png");
	game->terrain_texture.top_right_wall = mlx_load_png("assets/Terrain/Top_right_wall.png");
	game->terrain_texture.right_wall = mlx_load_png("assets/Terrain/Right_wall.png");
	game->terrain_texture.left_wall = mlx_load_png("assets/Terrain/Left_wall.png");
	game->terrain_texture.down_left_wall = mlx_load_png("assets/Terrain/Left_down_wall.png");
	game->terrain_texture.down_wall = mlx_load_png("assets/Terrain/Down_wall.png");
	game->terrain_texture.down_right_wall = mlx_load_png("assets/Terrain/Down_right_wall.png");
	game->terrain_texture.floor = mlx_load_png("assets/Terrain/Floor.png");
	game->terrain_texture.eglise = mlx_load_png("assets/Architecture/Eglise.png");
	game->terrain_texture.house = mlx_load_png("assets/Architecture/House.png");
	game->terrain_texture.archery = mlx_load_png("assets/Architecture/Archery.png");
	return ;
}
