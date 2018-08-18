/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:09:17 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/31 14:09:19 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char *start;

	while (*str != '\0')
	{
		if (*to_find == '\0')
		{
			return (str);
		}
		if (*str == *to_find)
		{
			start = str;
			while (*to_find != '\0')
			{
				if (*to_find != *str)
				{
					return (0);
				}
				str++;
				to_find++;
			}
			return (start);
		}
		str++;
	}
	return (0);
}
