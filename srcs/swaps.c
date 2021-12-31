/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:09:42 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/23 21:04:22 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list **stack, int flag, char c)
{
	t_list	*tmp;
	t_list	*aux;
	int 	len;

	len = ft_size_stack(*stack);
	if (len >= 2)
	{
		aux = *stack;
		tmp = (*stack)->content;
		aux->content = aux->next->content;
		aux->next->content = tmp;
		if (flag == 0)
			ft_printf("s%c\n", c);
	}
	else
		return ;
}

void	swap_ss(t_list **stack_a, t_list **stack_b)
{
	if (ft_size_stack(*stack_b) > 1 && ft_size_stack(*stack_a) > 1)
	{
		swap(stack_a, 1, 'a');
		swap(stack_b, 1, 'b');
		ft_printf("%s\n", "ss");
	}
	else if (ft_size_stack(*stack_a) > 1)
		swap(stack_a, 0, 'a');
	else if (ft_size_stack(*stack_b) > 1)
		swap(stack_b, 0, 'b');



}