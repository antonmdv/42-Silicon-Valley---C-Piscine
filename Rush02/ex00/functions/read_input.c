/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:23:50 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:04:33 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_list		*read_input(void)
{
	t_list	*list;
	char	buffer;

	list = NULL;
	while (read(0, &buffer, 1) > 0)
		list_insert_element(&list, buffer);
	return (list);
}
