/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:41:56 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:07:21 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*list_create_elem(char c)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	node->data = c;
	node->next = NULL;
	return (node);
}
