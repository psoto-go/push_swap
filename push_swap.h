/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:57:02 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/10 12:58:34 by psoto-go         ###   ########.fr       */
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

struct nodo
{
	int				number;
	struct nodo		*next;
};

struct nodo *superior = NULL;

int	ft_atoi(const char *str);

// int	ft_lstsize(nodo *lst);

#endif