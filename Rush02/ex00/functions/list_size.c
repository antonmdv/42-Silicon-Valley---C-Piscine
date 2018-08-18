/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:49:01 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:08:27 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		list_size(t_list *list)
{
	t_list	*ptr;
	int		count;

	count = 0;
	if (!list)
		return (count);
	ptr = list;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
