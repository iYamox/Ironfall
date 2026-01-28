/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:23:14 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:40:26 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/Ironfall.h"

void	create_img(t_game *game)
{
	terrain_and_architecture_img_init(game);
	player_img_init(game);
}