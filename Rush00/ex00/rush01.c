/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 12:46:10 by amedvede          #+#    #+#             */
/*   Updated: 2018/07/29 19:58:41 by ryared           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	filltopbottom();
void	fillmiddle();

void	rush(int x, int y)
{
	int pw;
	int flag;

	pw = 0;
	flag = 0;
	if (!((x <= 0) || (y <= 0)))
	{
		while (pw < y)
		{
			if ((pw == y - 1) && (pw != 0))
			{
				flag = 1;
			}
			if (pw == 0 || pw == y - 1)
			{
				filltopbottom(x, flag);
			}
			else
			{
				fillmiddle(x);
			}
			ft_putchar('\n');
			pw++;
		}
	}
}

void	filltopbottom(int len, int flag)
{
	int i;

	i = -1;
	while (++i < len)
	{
		if ((i == 0 && flag == 0) || ((i == len - 1 && flag == 1) && len != 1))
		{
			ft_putchar('/');
		}
		else if ((i == 0 && flag == 1) || (i == len - 1 && flag == 0))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
}

void	fillmiddle(int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (i == 0)
		{
			ft_putchar('*');
		}
		else if (i == length - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}
