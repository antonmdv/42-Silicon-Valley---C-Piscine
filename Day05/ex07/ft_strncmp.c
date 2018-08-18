/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:27:04 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/31 15:42:43 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (*s1 != '\0' && i < n)
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 > *s1)
			return (-1);
		if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
