/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverses.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:10:29 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/23 01:38:45 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		ft_prevlast(t_list **stack)
{
	t_list	*tmp;
	int		i;
	int		len;

	len = ft_size_stack(*stack);
	i = 0;
	tmp = *stack;
	while (i < len - 2)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
	
}

void		reverse_rotate(t_list **stack,int flag, char c)
{
	t_list 	*tmp;
	t_list 	*aux;
	int 	num;
	int		len;

	len = ft_size_stack(*stack);
	if (len >= 2)
	{
		tmp = *stack;
		aux = *stack;
		while (aux->next != NULL)
			aux = aux->next;
		num = *(int *)aux->content;
		ft_lstadd_front(&tmp, new_nodo((void *)&num, sizeof(int)));
		ft_prevlast(stack);
		*stack = tmp;
		free(aux->content);
		free(aux);
		if (flag == 0)
			ft_printf("rr%c\n", c);
	}
}

void	reverse_rotate_rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_size_stack(*stack_b) >= 2 && ft_size_stack(*stack_a) >= 2)
	{
		reverse_rotate(stack_a, 1, 'a');
		reverse_rotate(stack_b, 1, 'b');
		ft_printf("%s\n", "rrr");
	}
	else if (ft_size_stack(*stack_a) >= 2)
		reverse_rotate(stack_a, 0, 'a');
	else if (ft_size_stack(*stack_b) >= 2)
		reverse_rotate(stack_b, 0, 'b');
}