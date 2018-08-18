/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:05:34 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/26 14:05:38 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char number);
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}
