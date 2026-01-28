/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ironfall.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:22:48 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 15:53:46 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ironfall
# define Ironfall

#include <stdbool.h>
#include "MLX42/MLX42.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_ESC 65307

typedef struct s_pimg_idle
{
	void	*idle0;
	void	*idle1;
	void	*idle2;
	void	*idle3;
	void	*idle4;
	void	*idle5;
	void	*idle6;
	void	*idle7;
}			t_pimg_idle;

typedef struct s_player_img
{
	t_pimg_idle	idle;
}				t_player_img;


typedef struct s_map
{
	char	**grid;
	int		height;
	int		width;
}			t_map;

typedef struct s_terrain_img
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
	void	*archery;
}			t_terrain_img;

typedef struct s_player
{
	float			py;
	float			px;
	t_player_img	img;
}					t_player;

typedef struct s_all_maps
{
	t_map		lobby;
	t_map		player_house;
}				t_all_maps;

typedef struct s_game
{
	void				*mlx;
	void				*window;
	t_all_maps			maps;
	t_terrain_img		terrain_img;
	t_player			player;
}						t_game;

int		main(void);
void	ft_parsing(t_game *game);
void	init_texture(t_game *game);
void	terrain_and_architecture_init(t_game *game);
void	player_init(t_game *game);
void	create_maps(t_game *game);
void	create_lobby(t_game *game);
void	fill_map(char **map, t_game *game);
void	render_map(t_game *game, t_map *map);
void	ft_malloc_maps(t_game *game);
void	ft_free(t_game *game);
void	free_grid_maps(t_all_maps *maps);
void	free_split(t_map *map);
void	render_tile(t_game *game, char title, int y, int x);

#endif