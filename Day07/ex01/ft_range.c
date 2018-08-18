/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:36:18 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/02 14:36:22 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int size;
	int *array;

	i = 0;
	size = (max - min) + 1;
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	array[i] = '\0';
	return (array);
}
