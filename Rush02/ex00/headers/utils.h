/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:13:36 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/12 18:10:58 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <stdlib.h>
# include "ft_list.h"

void		list_insert_element(t_list **list, char c);
t_list		*list_create_element(char c);
int			list_size(t_list *list);
void		putstr(char *str);
void		putnbr(int nb);
void		putchar(char c);
int			count_rows(char *str);
int			count_cols(int len, int row);
int			strlength(char *str);
int			ft_strcmp(char *str1, char *str2);
void		output(int cols, int rows, int rushnum, int match);

#endif
