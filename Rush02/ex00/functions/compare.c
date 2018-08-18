/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:03:45 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:10:44 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "rushes.h"

void	compare(char *str)
{
	int match;
	int rows;
	int cols;

	if (!str)
	{
		putstr("aucune\n");
		return ;
	}
	match = 0;
	rows = count_rows(str);
	cols = count_cols(strlength(str), rows);
	if (ft_strcmp(str, ft_rush00(cols, rows)) == 0)
		output(cols, rows, 0, ++match);
	if (ft_strcmp(str, ft_rush01(cols, rows)) == 0)
		output(cols, rows, 1, ++match);
	if (ft_strcmp(str, ft_rush02(cols, rows)) == 0)
		output(cols, rows, 2, ++match);
	if (ft_strcmp(str, ft_rush03(cols, rows)) == 0)
		output(cols, rows, 3, ++match);
	if (ft_strcmp(str, ft_rush04(cols, rows)) == 0)
		output(cols, rows, 4, ++match);
	if (match == 0)
		putstr("aucune");
	putstr("\n");
}
