/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:57:02 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/21 20:37:46 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <fcntl.h>
#include <unistd.h>

#include "../libft/libft.h"

void	ft_print_stack(t_list *nodoa, t_list *nodob);

void	ft_error(t_list **nodo);

int		checkParams(char *argv, t_list **nodo);

t_list	*new_nodo(void *num, size_t size);

void	check_doubles(t_list **nodo, long num);

void	get_contents(char *argv, t_list **nodo);

int		ft_size_stack(t_list *nodoa);



#endif