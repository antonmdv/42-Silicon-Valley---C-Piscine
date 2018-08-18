/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 19:53:54 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/31 19:53:56 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);
int		is_number(char c);

int		is_number(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (is_number(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
