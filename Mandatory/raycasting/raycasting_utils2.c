/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmi <asalmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 00:51:46 by asalmi            #+#    #+#             */
/*   Updated: 2025/02/24 22:24:25 by asalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_vertical_intersection(t_game *game, double angle)
{
	game->vertical.found_vert_wall = false;
	game->vertical.vert_wall_hitx = 0;
	game->vertical.vert_wall_hity = 0;
	game->vertical.x_intercept = floor(game->player.position_x / UNIT_SIZE)
		* UNIT_SIZE;
	if (is_facing_right(angle))
		game->vertical.x_intercept += UNIT_SIZE;
	game->vertical.y_intercept = game->player.position_y
		+ (game->vertical.x_intercept - game->player.position_x) * tan(angle);
	game->vertical.x_step = UNIT_SIZE;
	if (is_facing_left(angle))
		game->vertical.x_step *= -1;
	game->vertical.y_step = UNIT_SIZE * tan(angle);
	if (is_facing_up(angle) && game->vertical.y_step > 0)
		game->vertical.y_step *= -1;
	else if (is_facing_down(angle) && game->vertical.y_step < 0)
		game->vertical.y_step *= -1;
	game->vertical.next_vert_stepx = game->vertical.x_intercept;
	game->vertical.next_vert_stepy = game->vertical.y_intercept;
}

void	init_horizontal_intersection(t_game *game, double angle)
{
	game->horizontal.found_horz_wall = false;
	game->horizontal.horz_wall_hitx = 0;
	game->horizontal.horz_wall_hity = 0;
	game->horizontal.y_intercept = floor(game->player.position_y / UNIT_SIZE)
		* UNIT_SIZE;
	if (is_facing_down(angle))
		game->horizontal.y_intercept += UNIT_SIZE;
	game->horizontal.x_intercept = ((game->horizontal.y_intercept
				- game->player.position_y) / tan(angle))
		+ game->player.position_x;
	game->horizontal.y_step = UNIT_SIZE;
	if (is_facing_up(angle))
		game->horizontal.y_step *= -1;
	game->horizontal.x_step = UNIT_SIZE / tan(angle);
	if (is_facing_left(angle) && game->horizontal.x_step > 0)
		game->horizontal.x_step *= -1;
	else if (is_facing_right(angle) && game->horizontal.x_step < 0)
		game->horizontal.x_step *= -1;
	game->horizontal.next_horz_stepx = game->horizontal.x_intercept;
	game->horizontal.next_horz_stepy = game->horizontal.y_intercept;
}

void	init_horz_rays(t_game *game, t_ray *ray, double horizontal_distance)
{
	ray->wall_hitx = game->horizontal.horz_wall_hitx;
	ray->wall_hity = game->horizontal.horz_wall_hity;
	ray->distance = horizontal_distance;
	ray->found_horz = true;
	ray->found_vert = false;
}

void	init_vert_rays(t_game *game, t_ray *ray, double vertical_distance)
{
	ray->wall_hitx = game->vertical.vert_wall_hitx;
	ray->wall_hity = game->vertical.vert_wall_hity;
	ray->distance = vertical_distance;
	ray->found_vert = true;
	ray->found_horz = false;
}
