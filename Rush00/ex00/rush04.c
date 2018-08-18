/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryared <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 20:23:51 by ryared            #+#    #+#             */
/*   Updated: 2018/07/29 20:24:35 by ryared           ###   ########.fr       */
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
			ft_putchar('A');
		}
		else if ((i == 0 && flag == 1) || (i == len - 1 && flag == 0))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
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
			ft_putchar('B');
		}
		else if (i == length - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}
