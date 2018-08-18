/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 15:54:49 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/28 15:54:51 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int root;

	root = 0;
	if (nb < 0)
	{
		return (-1);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		while (root++ < nb / 2)
		{
			if (((root * root) == nb) && (nb % root == 0))
			{
				return (root);
			}
		}
	}
	return (0);
}
