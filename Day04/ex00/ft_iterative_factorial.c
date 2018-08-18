/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 13:22:36 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/28 13:22:39 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int count;
	int factorial;

	count = 1;
	factorial = 1;
	if (nb > 0 && nb < 17)
	{
		while (count <= nb)
		{
			factorial *= count;
			count++;
		}
	}
	else if (nb == 0)
	{
		factorial = 1;
	}
	else
	{
		factorial = 0;
	}
	return (factorial);
}
