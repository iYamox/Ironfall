/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture_player.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:16:20 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 16:45:18 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/Ironfall.h"

void	player_texture_init(t_game *game)
{
	game->player.texture.idle.idle0 = mlx_load_png("assets/Player/idle/Player_idle0.png");
	game->player.texture.idle.idle1 = mlx_load_png("assets/Player/idle/Player_idle1.png");
	game->player.texture.idle.idle2 = mlx_load_png("assets/Player/idle/Player_idle2.png");
	game->player.texture.idle.idle3 = mlx_load_png("assets/Player/idle/Player_idle3.png");
	game->player.texture.idle.idle4 = mlx_load_png("assets/Player/idle/Player_idle4.png");
	game->player.texture.idle.idle5 = mlx_load_png("assets/Player/idle/Player_idle5.png");
	game->player.texture.idle.idle6 = mlx_load_png("assets/Player/idle/Player_idle6.png");
	game->player.texture.idle.idle7 = mlx_load_png("assets/Player/idle/Player_idle7.png");
}
