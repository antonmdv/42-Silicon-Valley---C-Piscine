/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 16:54:39 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/28 16:54:40 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);

int		ft_is_prime(int nb)
{
	int i;
	int flag;

	i = 2;
	flag = 1;
	if (nb > 1)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				flag = 0;
				break ;
			}
			i++;
		}
	}
	else
	{
		flag = 0;
	}
	return (flag);
}
