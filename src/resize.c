/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 17:49:06 by thou              #+#    #+#             */
/*   Updated: 2017/03/19 17:52:07 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void	resize_board(t_para *p)
{
	clear();
	endwin();
	refresh();
	print_map(p);
	g_signal = 0;
}
