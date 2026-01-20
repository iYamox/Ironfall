/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:27:16 by amary             #+#    #+#             */
/*   Updated: 2026/01/20 16:36:27 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ironfall.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (!initialise_map(&game))
		return (write(2, "Initialise map error\n", 22), 1);
	
}