/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:38:53 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/21 18:26:54 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		checkParams(char *argv, t_list **nodo)
{
	int		n;
	int		i;
	int 	flag;

	n = 0;
	i = 0;
	flag = 0;
	if (argv[0] == '+' || argv[0] == '-')
		i++;
	while (argv[i])
	{
		if(!ft_isdigit(argv[i]))
			ft_error(nodo);
		i++;
	}
	n = ft_atoi(argv, &flag);
	if (flag == 1)
		ft_error(nodo);	
	return (n);
}

t_list	*new_nodo(void *num, size_t size)
{
	t_list	*tmp;
	void	*con;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	con = malloc(size);
	if (!con)
	{
		free(tmp);
		tmp = NULL;
	}
	ft_memcpy(con, num, size);
	tmp->content = con;
	tmp->next = NULL;
	return(tmp);

		
}

void	check_doubles(t_list **nodo, long num)
{
	t_list *tmp;

	tmp = *nodo;
	while (tmp)
	{
		if (num == *(int *)tmp->content)
			ft_error(nodo);
		tmp = tmp->next;
	}
	// printf("%lu %ld\n", sizeof(int), num);
	ft_lstadd_back(nodo, new_nodo((void *) &num, sizeof(int)));
}


void	get_contents(char *argv, t_list **nodo)
{
	char	**aux;
	long	num;
	int		i;

	aux = ft_split(argv, ' ');
	i = 0;
	while (aux[i])
	{
		num = checkParams(aux[i], nodo);
		check_doubles(nodo, num);
		free(aux[i]);
		i++;
	}
	free(aux);
}
