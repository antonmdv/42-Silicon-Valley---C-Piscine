/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_element.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:30:32 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:06:40 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	list_insert_element(t_list **list, char c)
{
	t_list *node;

	if (list && *list)
	{
		node = *list;
		while (node->next)
			node = node->next;
		node->next = list_create_elem(c);
	}
	else
	{
		*list = list_create_elem(c);
	}
}
