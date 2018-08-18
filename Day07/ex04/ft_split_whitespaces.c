/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:38:14 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/02 17:38:16 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		nm_wd(char *str)
{
	int word_count;
	int i;

	i = 0;
	if (!str)
		return (0);
	word_count = 1;
	while (str[i] != '\0')
	{
		while ((str[i] != '\t' || str[i] != ' ' || str[i] != '\n') && str[i])
		{
			i++;
			if ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			{
				word_count++;
				while ((str[i] == '\t' || str[i] == ' '
					|| str[i] == '\n') && str[i])
					i++;
			}
		}
	}
	return (word_count);
}

int		wd_ln(char *str, int i)
{
	int length;

	length = 0;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
	{
		length++;
		i++;
	}
	return (length);
}

int		skip_invalid(char *str, int i)
{
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		i++;
	return (i);
}

int		is_valid(char c)
{
	if (c != '\0' && c != '\t' &&
			c != ' ' && c != '\n')
		return (1);
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	char	**all_words;
	int		i;
	int		j;
	int		current_word;

	i = 0;
	current_word = -1;
	if (str[0] == '\0')
		return (NULL);
	all_words = malloc(sizeof(char*) * (nm_wd(str) + 1));
	while (++current_word < nm_wd(str))
	{
		i = skip_invalid(str, i);
		all_words[current_word] = malloc(sizeof(char) * wd_ln(str, i) + 1);
		j = 0;
		while (is_valid(str[i]) == 1)
		{
			all_words[current_word][j] = str[i];
			j++;
			i++;
		}
		all_words[current_word][j] = '\0';
	}
	all_words[current_word] = NULL;
	return (all_words);
}
