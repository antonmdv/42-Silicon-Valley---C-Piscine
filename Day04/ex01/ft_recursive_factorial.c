/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 13:39:33 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/28 13:39:34 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 16)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}
