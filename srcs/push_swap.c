/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/21 23:02:49 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_list *nodoa, t_list *nodob)
{
	int flag;

	flag = 0;
	if (ft_size_stack(nodoa) > 0)
		flag = 1;
	while (nodoa)
	{
		ft_printf("%d\n", *(int *)nodoa->content);
		nodoa = nodoa->next;
	}
	if (flag == 1)
		ft_printf("--\na\n");
	flag = 0;
	if (ft_size_stack(nodob) > 0)
		flag = 1;
	while (nodob)
	{
		ft_printf("%d\n", *(int *)nodob->content);
		nodob = nodob->next;
	}
	if (flag == 1)
		ft_printf("--\nb\n");

}

int		ft_size_stack(t_list *nodoa)
{
	int i;

	i = 0;
	while (nodoa)
	{
		nodoa = nodoa->next;
		i++;
	}
	return(i);
}

void	ft_error(t_list **nodo)
{
	ft_printf("%s", "Error\n");
	ft_lstclear(nodo, free);
	exit(0);
}

