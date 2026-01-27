NAME = Ironfall

CC = cc
CFLAGS = -Wall -Wextra -Werror

# MLX42
MLX42_PATH = MLX42
MLX42_LIB = $(MLX42_PATH)/build/libmlx42.a
MLX42_INC = -I$(MLX42_PATH)/include

LIBS = -lglfw -lGL -ldl -lm

SRC =	srcs/main.c \
		srcs/initialise_map/initialise_map.c \
		srcs/initialise_map/init_texture/init_texture.c \
		srcs/initialise_map/init_texture/terrain_and_architecture_init.c \
		srcs/initialise_map/init_texture/player_init.c \
		srcs/initialise_map/init_map/init_map.c \
		srcs/initialise_map/init_map/create_map.c \
		srcs/initialise_map/init_map/create_lobby.c \
		srcs/initialise_map/init_map/genere_map.c \
		srcs/initialise_map/init_map/render_map.c \


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
