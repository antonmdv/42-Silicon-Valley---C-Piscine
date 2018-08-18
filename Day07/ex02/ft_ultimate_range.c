/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:50:07 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/02 14:50:09 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *ptr;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc(sizeof(*ptr) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}
