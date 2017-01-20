/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:20:20 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 11:01:53 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_info_user(t_env *env)
{
	char	*line;

	get_next_line(0, &line);
	env->user.letter = ((ft_strchr(line, '1') != NULL) ? 'O' : 'X');
	env->oppon.letter = (env->user.letter == 'O' ? 'X' : 'O');
	return (0);
}

int	ft_info_map(t_env *env)
{
	char	*line;

	get_next_line(0, &line);
	while (!ft_isdigit(*line))
		line++;
	env->map.y = ft_atoi(line);
	while (ft_isdigit(*line + 1))
		line++;
	env->map.x = ft_atoi(line);
	return (0);
}

int	ft_info(t_env *env)
{
	ft_info_user(env);
	ft_info_map(env);
	return (0);
}
