/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:53:30 by amary             #+#    #+#             */
/*   Updated: 2026/01/27 20:14:36 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/Ironfall.h"

bool	initialise_map(t_game *game)
{
	if (!init_texture(game))
		return (write(2, "Texture error\n", 15), false);
	if (!init_map(game))
		return (write(2, "Map error\n", 11));
	return (true);
}
