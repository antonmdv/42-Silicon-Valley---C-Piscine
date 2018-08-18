/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:07:23 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/01 17:19:05 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_arguments(char **argv)
{
	int i;
	int j;

	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		compare(char *a, char *b)
{
	int i;

	i = 0;
	while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
		i++;
	return (a[i] - b[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	char	*holder;
	int		i;

	i = 0;
	while (++i < argc - 1)
	{
		if (compare(argv[i], argv[i + 1]) > 0)
		{
			holder = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = holder;
			i = 0;
		}
	}
	print_arguments(argv);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argc, argv);
	return (0);
}
