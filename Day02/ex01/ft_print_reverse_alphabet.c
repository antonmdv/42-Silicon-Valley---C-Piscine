/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 12:59:11 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/26 13:00:07 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char currentchar);
void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char currentchar;

	currentchar = 'z';
	while (currentchar >= 'a')
	{
		ft_putchar(currentchar);
		currentchar--;
	}
}
