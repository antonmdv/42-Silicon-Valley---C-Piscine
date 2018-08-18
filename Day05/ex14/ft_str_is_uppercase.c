/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:13:54 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/31 20:13:55 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str);
int		upper_case(char c);

int		upper_case(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (upper_case(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
