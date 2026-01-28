/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lobby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:07:02 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 17:32:57 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/Ironfall.h"

void	create_lobby(t_game *game)
{
	char *lobby_map[] = 
	{
		"WWWWWWWWWWWW"
		"W7888888889W",
		"W4P00E00006W",
		"W400000T006W",
		"W4000H00006W",
		"W1222222223W",
		"WWWWWWWWWWWW",
		NULL
	};
	fill_map(lobby_map, game);
	return ;
}
