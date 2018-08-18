/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:42:26 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 20:05:45 by kbojorqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	putnbr(int nb)
{
	int temp;
	int size;

	size = 1;
	if (nb == -2147483648)
		putstr("-2147483648");
	else if (nb < 0)
	{
		putchar('-');
		nb *= -1;
	}
	temp = nb;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb;
	while (size && nb != -2147483648)
	{
		putchar((temp / size) + 48);
		temp %= size;
		size /= 10;
	}
}
