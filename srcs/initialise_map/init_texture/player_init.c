/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:16:20 by amary             #+#    #+#             */
/*   Updated: 2026/01/27 18:54:18 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	player_init(t_game *game)
{
	game->player.img.idle.idle0 = "assets/Player/idle/Player_idle0.png";
	game->player.img.idle.idle1 = "assets/Player/idle/Player_idle1.png";
	game->player.img.idle.idle2 = "assets/Player/idle/Player_idle2.png";
	game->player.img.idle.idle3 = "assets/Player/idle/Player_idle3.png";
	game->player.img.idle.idle4 = "assets/Player/idle/Player_idle4.png";
	game->player.img.idle.idle5 = "assets/Player/idle/Player_idle5.png";
	game->player.img.idle.idle6 = "assets/Player/idle/Player_idle6.png";
	game->player.img.idle.idle7 = "assets/Player/idle/Player_idle7.png";
}
