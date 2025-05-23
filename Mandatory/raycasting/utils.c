/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmi <asalmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:45:21 by asalmi            #+#    #+#             */
/*   Updated: 2025/02/24 22:15:39 by asalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

double	normalize_angle(double angle)
{
	angle = fmod(angle, (2 * M_PI));
	if (angle < 0)
		angle += (2 * M_PI);
	return (angle);
}

bool	is_wall(t_game *game, double x, double y)
{
	int	x_tmp;
	int	y_tmp;

	x_tmp = floor(x / UNIT_SIZE);
	y_tmp = floor(y / UNIT_SIZE);
	if (x_tmp < 0 || y_tmp < 0 || x_tmp >= ft_strlen(game->map[y_tmp])
		|| y_tmp >= game->height)
		return (false);
	return (game->map[y_tmp][x_tmp] == '1');
}

double	calculate_distance(double x1, double y1, double x2, double y2)
{
	double	dx;
	double	dy;

	dx = x2 - x1;
	dy = y2 - y1;
	return (sqrt((dx * dx) + (dy * dy)));
}
