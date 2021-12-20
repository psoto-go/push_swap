/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/20 18:30:11 by psoto-go         ###   ########.fr       */
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

int		checkParams(char *argv, t_list **nodo)
{
	long	n;
	int		i;

	n = 0;
	i = 0;
	if (argv[0] == '+' || argv[0] == '-')
		i++;
	while (argv[i])
	{
		if(!ft_isdigit(argv[i]))
			ft_error(nodo);
		i++;
	}
	n = ft_atoi(argv);
	if (n > MAX_INT || n < MIN_INT)
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

int			main(int argc, char **argv)
{
	t_list *nuevoNodo;
	int i;

	i = 1;
	nuevoNodo = NULL;
	if (!argv)
		ft_error(&nuevoNodo);
	while(i < argc)
	{
		get_contents(argv[i], &nuevoNodo);
		i++;
	}
	imprime(nuevoNodo);
	// system("leaks push_swap");
}