/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:51:58 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 16:41:10 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/Ironfall.h"

void	init_texture(t_game *game)
{
	terrain_and_architecture_texture_init(game);
	player_texture_init(game);
}
