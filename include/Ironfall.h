/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ironfall.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:22:48 by amary             #+#    #+#             */
/*   Updated: 2026/01/20 16:34:48 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ironfall
# define Ironfall

#include "../minilibx-linux/mlx.h"

# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_ESC 65307

typedef struct s_map
{
	char	**grid;
	int		height;
	int		width;
}			t_map;

typedef struct s_img
{
	void	*water;
	void	*top_left_wall;
	void	*top_wall;
	void	*top_right_wall;
	void	*left_wall;
	void	*floor;
	void	*right_wall;
	void	*down_left_wall;
	void	*down_wall;
	void	*down_right_wall;
	void	*tree;
	void	*eglise;
	void	*house;
	void	*player_idle_right;
	void	*player_idle_left;
	void	*player_walk_right;
	void	*player_walk_left;
}			t_img;

typedef struct s_player
{
	float	py;
	float	px;
}			t_player;

typedef struct s_game
{
	void		*mlx;
	void		*window;
	t_map		map;
	t_img		img;
	t_player	player;
}				t_game;

#endif