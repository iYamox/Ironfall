#include "../../include/Ironfall.h"

int	initialise_map(t_game *game)
{
	if (!check_map(game)) // Check la map n'a pas de probleme (tous les character si y'a pas de trou dans la map, etc...)
		return (write(2, "Map error\n", 11), 0);
	if (!init_texture(game))
		return (write(2, "Texture error\n", 15), 0);
}