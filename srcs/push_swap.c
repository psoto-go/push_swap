/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/20 18:58:09 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void imprime(t_list *nodo)
{
	while (nodo)
	{
		printf("%d\n", *(int *)nodo->content);
		nodo = nodo->next;
	}
}

void	ft_error(t_list **nodo)
{
	write(1, "Error\n", 6);
	ft_lstclear(nodo, free);
	exit(0);
}

