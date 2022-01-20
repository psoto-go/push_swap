/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   renom.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:39:40 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/20 19:04:14 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	renom_nums(t_list **stack_a, int len)
{
	int *new_array;
	int *copy;
	int i;
	int j;
	int tmp;
	t_list *tmp_lst;

	tmp_lst = *stack_a;
	i = 0;
	j = 0;
	new_array = malloc(sizeof(int) * len);
	while (i < len)
	{
		new_array[i] = *(int *)tmp_lst->content;
		tmp_lst = tmp_lst->next; 
		i++;
	}
	copy = malloc(sizeof(int) * len);
	i = 0;
	while(i < len)
	{	
		copy[i] = new_array[i];
		i++;
	}
	i = 0;
	tmp = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (new_array[j] < new_array[i])
			{
				tmp = new_array[j];
				new_array[j] = new_array[i];
				new_array[i] = tmp;
			}
			j++;
		}
		i++;
	}
	
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (copy[i] == new_array[j])
			{
				copy[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}


	ft_lstclear(stack_a, free);
	i = 0;
	while (i < len)
	{
		ft_lstadd_back(stack_a, new_nodo((void *) &copy[i], sizeof(int)));
		i++;
	}
	free(copy);
	free(new_array);











	// i = 0;
	// while (i < len)
	// {
	// 	// printf("%d ", copy[i]);
	// 	printf("%d   ", copy[i]);
	// 	printf("%d ", new_array[i]);

	// 	i++;
	// }
		// printf("%d tamaño", ft_size_stack(*stack_a));
	// ft_print_stack(*stack_a, 0);
	
	
}