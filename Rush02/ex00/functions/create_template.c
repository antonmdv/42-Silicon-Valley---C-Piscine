/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_template.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:41:02 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 19:56:38 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char		*create_template(t_list *list)
{
	int		i;
	char	*str;
	int		list_length;

	if (!list)
		return (NULL);
	str = NULL;
	i = 0;
	list_length = list_size(list);
	str = (char *)malloc(sizeof(char) * (list_length + 1));
	while (i < list_length)
	{
		str[i] = list->data;
		list = list->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}
