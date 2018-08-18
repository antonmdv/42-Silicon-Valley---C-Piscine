/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:38:10 by amedvede          #+#    #+#             */
/*   Updated: 2018/08/10 15:31:02 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef	struct		s_btree
{
	struct s_btree		*right;
	struct s_btree		*left;
	void				*item;
}					t_btree;

t_btree				*btree_create_node(void *item);

#endif
