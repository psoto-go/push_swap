/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/21 13:19:50 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_list **nodo)
{
	ft_printf("%s", "Error\n");
	ft_lstclear(nodo, free);
	exit(0);
}

void	ft_fin(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a, free);
	ft_lstclear(stack_b, free);
}
