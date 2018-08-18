/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:16:37 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/09 17:47:24 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 4096

void	putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_display_file(int argc, char **argv)
{
	int		file;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	if (argc <= 1)
		putstr("File name missing.");
	else if (argc > 2)
		putstr("Too many arguments.");
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file != -1)
		{
			while ((ret = read(file, buff, BUFF_SIZE)))
			{
				buff[ret] = '\0';
				putstr(buff);
			}
			close(file);
		}
	}
}

int		main(int argc, char **argv)
{
	ft_display_file(argc, argv);
	return (0);
}
