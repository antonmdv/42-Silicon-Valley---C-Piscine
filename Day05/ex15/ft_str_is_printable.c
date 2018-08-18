/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:18:34 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/31 20:18:36 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);
int		is_printable(char c);

int		is_printable(char c)
{
	if (c >= 32)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (is_printable(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
