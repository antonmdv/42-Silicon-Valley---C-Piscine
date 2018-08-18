/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:36:42 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/07 19:03:13 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*arr;
	
	arr = (int *)malloc(sizeof(int) * length);
	i = 0;
    while (i < length)
    {
		arr[i] = f(tab[i]);
		i++;                 
	}
	return (arr);
}
