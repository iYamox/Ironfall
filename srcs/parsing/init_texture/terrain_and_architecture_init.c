/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terrain_and_architecture_init.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:13:12 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 15:57:20 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	terrain_and_architecture_init(t_game *game)
{
	game->terrain_img.water = "assets/Terrain/Water.png";
	game->terrain_img.top_left_wall = "assets/Terrain/Top_left_wall.png";
	game->terrain_img.top_wall = "assets/Terrain/Top_wall.png";
	game->terrain_img.top_right_wall = "assets/Terrain/Top_right_wall.png";
	game->terrain_img.right_wall = "assets/Terrain/Right_wall.png";
	game->terrain_img.left_wall = "assets/Terrain/Left_wall.png";
	game->terrain_img.down_left_wall = "assets/Terrain/Left_down_wall.png";
	game->terrain_img.down_wall = "assets/Terrain/Down_wall.png";
	game->terrain_img.down_right_wall = "assets/Terrain/Down_right_wall.png";
	game->terrain_img.floor = "assets/Terrain/Floor.png";
	game->terrain_img.eglise = "assets/Architecture/Eglise.png";
	game->terrain_img.house = "assets/Architecture/House.png";
	game->terrain_img.archery = "assets/Architecture/Archery.png";
	return ;
}
