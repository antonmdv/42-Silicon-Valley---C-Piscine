/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:54:06 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/09 20:36:55 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	read_write_std_in(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

void	display(char *file_name)
{
	int		file;
	ssize_t	bytes;
	char	buffer[28999];

	file = open(file_name, O_RDWR);
	if (file < 0)
	{
		write(2, "cat: ", 5);
		write(2, file_name, str_len(file_name));
		if (errno == 21)
			write(2, ": Is a directory\n", 17);
		else
			write(2, ": No such file or directory\n", 28);
		return ;
	}
	while ((bytes = read(file, &buffer, 28676)))
		write(1, &buffer, bytes);
	close(file);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc <= 1)
		read_write_std_in();
	while (i < argc)
	{
		if (*argv[i] == '-')
			read_write_std_in();
		else
			display(argv[i]);
		i++;
	}
}
