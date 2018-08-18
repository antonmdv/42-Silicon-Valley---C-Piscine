/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:01:48 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/31 20:01:49 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str);
int		lower_case(char c);

int		lower_case(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (lower_case(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
