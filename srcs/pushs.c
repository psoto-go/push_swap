/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:10:07 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/18 14:02:42 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	delete_content(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*aux;

	tmp = *stack_a;
	aux = *stack_a;
	aux = aux->next;
	*stack_a = aux;
	free(tmp->content);
	free(tmp);
}

void	push_all(t_list **stack, int num)
{
	ft_lstadd_front(stack, new_nodo((void *)&num, sizeof(int)));
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = ft_size_stack(*stack_a);
	if (len != 0)
	{
		push_all(stack_b, *(int *)(*stack_a)->content);
		delete_content(stack_a);
		ft_printf("%s\n", "pb");
	}
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = ft_size_stack(*stack_b);
	if (len != 0)
	{
		push_all(stack_a, *(int *)(*stack_b)->content);
		delete_content(stack_b);
		ft_printf("%s\n", "pa");
	}
}
