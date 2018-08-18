/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 13:07:32 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/29 13:07:34 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	sastantua(int size);
void	atlevel(int x, int y, int offset);
int		lengthatlevel(int x);

int		lengthatlevel(int currentlevel)
{
	int c;
	int additionaloverflow;

	if (currentlevel == 0)
	{
		return (7);
	}
	additionaloverflow = (currentlevel % 2) + (currentlevel / 2);
	c = 1 + (3 + currentlevel) + additionaloverflow;
	return ((lengthatlevel(currentlevel - 1)) + 2 * (c));
}

void	atlevel(int x, int y, int offset)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = -offset;
		while (i < (y - (1 + j)))
		{
			ft_putchar(' ');
			i++;
		}
		i += y + 1 - j;
		ft_putchar('/');
		while (i < x)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		j++;
	}
}

void	sastantua(int size)
{
	int currentlevel;
	int x;
	int y;
	int offset;

	currentlevel = 0;
	if (size > 0)
	{
		while (currentlevel < size)
		{
			y = 3 + currentlevel;
			x = lengthatlevel(currentlevel);
			offset = lengthatlevel(size - 1) - (x / 2);
			atlevel(x, y, offset);
			currentlevel++;
		}
	}
}
