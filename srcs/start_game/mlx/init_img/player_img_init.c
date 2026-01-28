/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_img_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:49:26 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:42:58 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/Ironfall.h"

void	player_img_init(t_game *game)
{
	game->player.img.idle.idle0 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle0);
	game->player.img.idle.idle1 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle1);
	game->player.img.idle.idle2 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle2);
	game->player.img.idle.idle3 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle3);
	game->player.img.idle.idle4 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle4);
	game->player.img.idle.idle5 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle5);
	game->player.img.idle.idle6 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle6);
	game->player.img.idle.idle7 = mlx_texture_to_image(game->mlx, game->player.texture.idle.idle7);
	return ;
}
