/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:36:18 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/26 14:36:20 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char currentchar);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if (a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
