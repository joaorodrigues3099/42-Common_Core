/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg.>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:59:00 by joao-alm          #+#    #+#             */
/*   Updated: 2025/01/13 10:59:00 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#define TILE_SIZE 64
#define COUNTER_SIZE 32
#include <stdbool.h>

typedef struct	s_map
{
	char		**map;
	int			width;
	int			height;
	int			min_moves;
	int			n_collectibles;
	int			n_players;
	int			n_exits;
}				t_map;

typedef struct	s_player
{
	int			x;
	int			y;
	int			sprite;
}				t_player;

typedef struct s_counter
{
	void	**counter;
}				t_counter;

typedef struct	s_game
{
	t_map		map;
	t_player	player;
	t_counter	counter;
	void		**sprites;
	void		*mlx;
	void		*win;
}				t_game;

typedef struct	s_point
{
	int	x;
	int	y;
}				t_point;

// Map
void	ft_get_map(t_game *game, const char *filename);

void	ft_window(t_game *game);

void	load_counter_sprites(t_game *game);
void	ft_render_counter(t_game *game);

void	load_sprites(t_game *game);
void	render_map(t_game *game);

int		ft_handle_keys(int keycode, t_game *game);
int		ft_press_x(t_game *game);

void	ft_update_player_pos(t_game *game, int x_offset, int y_offset);

enum	e_counter_sprites
{
	ZERO,
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	LETTER_M,
	LETTER_I,
	LETTER_N,
	LETTER_U,
	LETTER_O,
	LETTER_V,
	LETTER_E,
	LETTER_S,
	LETTER_Y,
	LETTER_R,
	LETTER_SPACE,
	N_COUNTER_SPRITES
};

enum	e_sprites
{
	WALL,
	FLOOR,
	PLAYER_UP,
	PLAYER_LEFT,
	PLAYER_DOWN,
	PLAYER_RIGHT,
	COLLECTIBLE,
	MAP_EXIT,
	N_SPRITES
};

enum	e_keycodes
{
	KEY_ESC = 65307,
	KEY_W = 119,
	KEY_UP = 65362,
	KEY_A = 97,
	KEY_LEFT = 65361,
	KEY_S = 115,
	KEY_DOWN = 65364,
	KEY_D = 100,
	KEY_RIGHT = 65363
};

#endif //SO_LONG_H
