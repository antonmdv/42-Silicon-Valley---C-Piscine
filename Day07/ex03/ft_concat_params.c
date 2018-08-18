/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 16:31:04 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/02 16:31:06 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*params;
	int		totalsize;
	int		i;
	int		j;

	i = 1;
	totalsize = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			totalsize++;
			j++;
		}
		i++;
	}
	params = malloc(sizeof(params) + 1);
	i = 1;
	while (i < argc)
	{
		params = ft_concat(params, argv[i]);
		i++;
	}
	return (params);
}
