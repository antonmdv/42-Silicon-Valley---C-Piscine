/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:29:10 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/30 15:29:11 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
int		is_valid_char(char c);
int		convert_untill_invalid(char *str);

int		is_valid_char(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*find_valid_begining(char *str)
{
	while (*str == ' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+' || is_valid_char(*str))
	{
		return (str);
	}
	return (0);
}

int		convert_untill_invalid(char *str)
{
	int converted_number;
	int current_number;

	converted_number = 0;
	while (*str != '\0' && is_valid_char(*str) == 1)
	{
		current_number = *str - '0';
		converted_number = 10 * converted_number + current_number;
		str++;
	}
	return (converted_number);
}

int		ft_atoi(char *str)
{
	int converted_number;

	converted_number = 0;
	if (*str == '\0')
		return (converted_number);
	str = find_valid_begining(str);
	if (str == 0)
		return (0);
	if (((*str == '-') || (*str == '+') || (is_valid_char(*str))))
	{
		if ((*str == '-') && (is_valid_char(*(str + 1))
			&& ((*(str + 1)) != '\0')))
		{
			return ((-1) * (convert_untill_invalid(str + 1)));
		}
		else if ((*str == '+') && (is_valid_char(*(str + 1))
			&& ((*(str + 1)) != '\0')))
		{
			return (convert_untill_invalid(str + 1));
		}
		return (convert_untill_invalid(str));
	}
	return (converted_number);
}
