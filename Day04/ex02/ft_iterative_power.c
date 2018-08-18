/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 13:56:43 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/28 13:56:44 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int count;
	int current;

	if (power < 0)
	{
		current = 0;
	}
	else if (power == 0)
	{
		current = 1;
	}
	else
	{
		current = 1;
		count = 0;
		while (count++ < power)
		{
			current *= nb;
		}
	}
	return (current);
}
