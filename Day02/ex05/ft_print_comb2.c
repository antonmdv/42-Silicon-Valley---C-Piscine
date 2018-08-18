/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 15:50:09 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/26 15:50:13 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char currentchar);
void	ft_print_comb2(void);
void	ft_print(int ff, int fs);

void	ft_print_comb2(void)
{
	int ff;
	int fs;

	ff = '0';
	fs = ff;
	while (!(ff == '9' && fs == '9'))
	{
		ft_print(ff, fs);
		if (fs == '9')
		{
			fs = '0';
			ff++;
		}
		else
		{
			fs++;
		}
	}
}

void	ft_print(int ff, int fs)
{
	int sf;
	int ss;

	sf = ff;
	ss = fs + 1;
	while (sf <= '9')
	{
		while (ss <= '9')
		{
			ft_putchar(ff);
			ft_putchar(fs);
			ft_putchar(' ');
			ft_putchar(sf);
			ft_putchar(ss);
			if (!(ff == '9' && fs == '8'))
			{
				ft_putchar(',');
			}
			ss++;
		}
		ss = '0';
		sf++;
	}
}
