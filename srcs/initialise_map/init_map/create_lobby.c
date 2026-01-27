/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lobby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:07:02 by amary             #+#    #+#             */
/*   Updated: 2026/01/27 20:15:14 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	create_lobby(t_game *game)
{
	char *lobby_map[] = 
	{
		"WWWWWWWWWWWW"
		"W1111111111W",
		"W1P00E00001W",
		"W100000T001W",
		"W1000H00001W",
		"W1111111111W",
		"WWWWWWWWWWWW",
		NULL
	};
	genere_map(lobby_map, game);
	// render_map(game, &game->maps.lobby);
}
