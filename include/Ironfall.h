/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ironfall.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:22:48 by amary             #+#    #+#             */
/*   Updated: 2026/01/28 16:58:45 by amary            ###   ########.fr       */
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
# define TILE_SIZE 96

typedef struct s_texture_idle
{
	mlx_texture_t	*idle0;
	mlx_texture_t	*idle1;
	mlx_texture_t	*idle2;
	mlx_texture_t	*idle3;
	mlx_texture_t	*idle4;
	mlx_texture_t	*idle5;
	mlx_texture_t	*idle6;
	mlx_texture_t	*idle7;
}			t_texture_idle;

typedef struct s_player_texture
{
	t_texture_idle		idle;
}				t_player_texture;

typedef struct s_pimg_idle
{
	mlx_image_t	*idle0;
	mlx_image_t	*idle1;
	mlx_image_t	*idle2;
	mlx_image_t	*idle3;
	mlx_image_t	*idle4;
	mlx_image_t	*idle5;
	mlx_image_t	*idle6;
	mlx_image_t	*idle7;
}			t_pimg_idle;

typedef struct s_player_img
{
	t_pimg_idle		idle;
}				t_player_img;


typedef struct s_map
{
	char	**grid;
	int		height;
	int		width;
}			t_map;

typedef struct s_terrain_texture
{
	mlx_texture_t	*water;
	mlx_texture_t	*top_left_wall;
	mlx_texture_t	*top_wall;
	mlx_texture_t	*top_right_wall;
	mlx_texture_t	*left_wall;
	mlx_texture_t	*floor;
	mlx_texture_t	*right_wall;
	mlx_texture_t	*down_left_wall;
	mlx_texture_t	*down_wall;
	mlx_texture_t	*down_right_wall;
	mlx_texture_t	*tree;
	mlx_texture_t	*eglise;
	mlx_texture_t	*house;
	mlx_texture_t	*archery;
}			t_terrain_texture;

typedef struct s_terrain_img
{
	mlx_image_t	*water;
	mlx_image_t	*top_left_wall;
	mlx_image_t	*top_wall;
	mlx_image_t	*top_right_wall;
	mlx_image_t	*left_wall;
	mlx_image_t	*floor;
	mlx_image_t	*right_wall;
	mlx_image_t	*down_left_wall;
	mlx_image_t	*down_wall;
	mlx_image_t	*down_right_wall;
	mlx_image_t	*tree;
	mlx_image_t	*eglise;
	mlx_image_t	*house;
	mlx_image_t	*archery;
}			t_terrain_img;

typedef struct s_player
{
	float				py;
	float				px;
	t_player_img		img;
	t_player_texture	texture;
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
	t_terrain_texture	terrain_texture;
	t_terrain_img		terrain_img;
	t_player			player;
}						t_game;

int		main(void);
void	ft_parsing(t_game *game);
void	create_maps(t_game *game);
void	create_lobby(t_game *game);
void	fill_map(char **map, t_game *game);
void	render_map(t_game *game, t_map *map);
void	ft_malloc_maps(t_game *game);
void	ft_free(t_game *game);
void	free_grid_maps(t_all_maps *maps);
void	free_split(t_map *map);
void	render_tile(t_game *game, char title, int y, int x);
void	start_game(t_game *game);
bool	init_mlx(t_game *game);
void	init_texture(t_game *game);
void	terrain_and_architecture_texture_init(t_game *game);
void	terrain_and_architecture_img_init(t_game *game);
void	player_texture_init(t_game *game);
void	player_img_init(t_game *game);
void	create_img(t_game *game);

#endif