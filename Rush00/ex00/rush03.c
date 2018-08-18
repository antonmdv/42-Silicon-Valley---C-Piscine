/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thammond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 20:43:24 by thammond          #+#    #+#             */
/*   Updated: 2018/07/29 21:05:30 by thammond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	filltopbottom();
void	fillmiddle();

void	rush(int r, int c)
{
	int pr;
	int flag;

	pr = 0;
	flag = 0;
	if (!((r == 0) || (c == 0)))
	{
		while (pr < c)
		{
			if ((pr == c - 1) && (pr != 0))
			{
				flag = 1;
			}
			if (pr == 0 || pr == c - 1)
			{
				filltopbottom(r, flag);
			}
			else
			{
				fillmiddle(r);
			}
			ft_putchar('\n');
			pr++;
		}
	}
}

void	filltopbottom(int col, int flag)
{
	int i;

	i = -1;
	while (++i < col)
	{
		if ((i == 0 && flag == 0) || ((i == 0 && flag == 1) && (col != 1)))
		{
			ft_putchar('A');
		}
		else if ((i == col - 1 && flag == 0) || (i == col - 1 && flag == 1))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void	fillmiddle(int column)
{
	int i;

	i = 0;
	while (i < column)
	{
		if (i == 0)
		{
			ft_putchar('B');
		}
		else if (i == column - 1)
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
