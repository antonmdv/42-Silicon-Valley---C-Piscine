/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:18:04 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/31 16:18:05 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str);
int			check_if_valid_character(char c);
int			check_if_new_word(char *str);

int			check_if_valid_character(char c)
{
	if ((c < 65 || c > 122) || (c > 90 && c < 97))
		return (1);
	return (0);
}

int			check_if_new_word(char *str)
{
	if (check_if_valid_character(*str) == 1 &&
		(check_if_valid_character(*(str - 1)) == 0 || (*(str - 1)) != ' '))
	{
		return (1);
	}
	return (0);
}

char		*ft_strcapitalize(char *str)
{
	char		*new_string;
	int			flag_is_word;

	new_string = str;
	flag_is_word = 1;
	while (*str != '\0')
	{
		if (flag_is_word == 1 && (*str >= 97 && *str <= 122))
		{
			*str -= 32;
			flag_is_word = 0;
		}
		else if (flag_is_word == 0 && (*str >= 65 && *str <= 90))
		{
			*str += 32;
		}
		flag_is_word = check_if_new_word(str);
		str++;
	}
	return (new_string);
}
