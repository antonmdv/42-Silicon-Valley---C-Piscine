/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:15:21 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:13:22 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "ft_list.h"

int		main(void)
{
	t_list	*input;
	char	*cmp;

	input = read_input();
	cmp = create_template(input);
	compare(cmp);
	return (0);
}
