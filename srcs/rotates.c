/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:10:18 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/18 14:01:20 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list **stack, int flag, char c)
{
	t_list	*tmp;
	t_list	*aux;
	int		num;

	if (ft_size_stack(*stack) >= 2)
	{
		tmp = *stack;
		aux = *stack;
		num = *(int *)tmp->content;
		ft_lstadd_back(&tmp, new_nodo((void *)&num, sizeof(int)));
		tmp = aux->next;
		*stack = tmp;
		free(aux->content);
		free(aux);
		if (flag == 0)
			ft_printf("r%c\n", c);
	}
}

void	rotate_rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_size_stack(*stack_b) >= 2 && ft_size_stack(*stack_a) >= 2)
	{
		rotate(stack_a, 1, 'a');
		rotate(stack_b, 1, 'b');
		ft_printf("%s\n", "rr");
	}
	else if (ft_size_stack(*stack_a) >= 2)
		rotate(stack_a, 0, 'a');
	else if (ft_size_stack(*stack_b) >= 2)
		rotate(stack_b, 0, 'b');
}
