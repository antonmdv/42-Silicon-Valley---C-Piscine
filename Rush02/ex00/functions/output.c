/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:37:26 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:05:23 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	output(int cols, int rows, int id, int match)
{
	if (match > 1)
		putstr(" || ");
	putstr("[rush-0");
	putnbr(id);
	putstr("]");
	putstr("[");
	putnbr(cols);
	putstr("]");
	putstr("[");
	putnbr(rows);
	putstr("]");
}
