NAME = Ironfall

CC = cc
# CFLAGS = -Wall -Wextra -Werror

# MLX42
MLX42_PATH = MLX42
MLX42_LIB = $(MLX42_PATH)/build/libmlx42.a
MLX42_INC = -I$(MLX42_PATH)/include

LIBS = -lglfw -lGL -ldl -lm

SRC =	srcs/main.c \
		srcs/parsing/ft_parsing.c \
		srcs/parsing/init_texture/init_texture.c \
		srcs/parsing/init_texture/terrain_and_architecture_init.c \
		srcs/parsing/init_texture/init_player.c \
		srcs/parsing/create_maps/create_maps.c \
		srcs/parsing/create_maps/create_lobby.c \
		srcs/parsing/create_maps/fill_map.c \
		srcs/parsing/create_maps/render_map.c \
		srcs/parsing/create_maps/ft_malloc_maps.c \
		srcs/parsing/create_maps/render_tile.c \
		srcs/close_game/ft_free.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MLX42_LIB) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(MLX42_INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
