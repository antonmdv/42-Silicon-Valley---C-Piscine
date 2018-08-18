/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabe.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:32:08 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/26 11:52:00 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char currentchar;

	currentchar = 'a';
	while (currentchar <= 'z')
	{
		ft_putchar(currentchar);
		currentchar++;
	}
}
