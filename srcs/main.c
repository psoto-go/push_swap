/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:36:28 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/18 14:07:04 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*nuevo_nodo_a;
	t_list	*nuevo_nodo_b;
	int		i;

	i = 1;
	nuevo_nodo_a = NULL;
	nuevo_nodo_b = NULL;
	while (i < argc)
	{
		get_contents(argv[i], &nuevo_nodo_a);
		i++;
	}
	start_sorting(&nuevo_nodo_a, &nuevo_nodo_b);
	// ft_print_stack(nuevo_nodo_a, nuevo_nodo_b);
	// ft_printf("%d Tamaño\n",ft_size_stack(nuevo_nodo_a));
	// system("leaks push_swap");
}
