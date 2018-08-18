/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 22:45:19 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/27 22:45:29 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	char	temp1;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size])
	{
		size++;
	}
	while (i < size / 2)
	{
		temp1 = str[i];
		str[i] = str[(size - i - 1)];
		str[(size - i - 1)] = temp1;
		i++;
	}
	return (str);
}
