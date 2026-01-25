NAME = Ironfall

CC = cc
CFLAGS = -Wall -Werror -Wextra

MLX_PATH = minilibx-linux
MLX_LIB = -L$(MLX_PATH) -lmlx -lXext -lX11 -lm -lbsd

SRC = srcs/main.c \
		srcs/initialise_map/initialise_map.c \
		srcs/initialise_map/init_texture.c \	
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MLX_LIB) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all