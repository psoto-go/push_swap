/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/14 15:40:16 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Operación push
void	agregar(int content, t_list *lista) {
	t_list *current;
	lista = malloc(sizeof(t_list));
	if (!lista)
		return ;
	current = lista;
    // Le ponemos el dato
    current->content = content;
	printf("%daasfasdf\n", current->content);
    // Y ahora el nuevo nodo es el superior, y su siguiente
    // es el que antes era superior
    current = current->next;
}

void imprimir(void) {
	t_list *current;

	current = NULL;
    printf("Imprimiendo...\n");
    while (current != NULL) {
        printf("%dp\n", current->content);
        current = current->next;
    }
}

// void	tamanio(void){
//     int contador = 0;
//     struct nodo *temporal = superior;
//     while (temporal != NULL) {
// 		contador++;
//         temporal = temporal->next;
//     }
// 	printf("Contador es: %d", contador);
// }

void	ft_error(void)
{
	write(1, "Error\n", 6);
	// ft_lstclear(a, free);
	exit(0);
}

int		checkParams(char *argv)
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
			ft_error();
		i++;
	}
	n = ft_atoi(argv);
	if (n > MAX_INT || n < MIN_INT)
		ft_error();
	return (n);
}


int		ft_arraylen(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
	{
		j++;
		i++;
	}
	return(j);
}

// int 	repes(char **aux)
// {
// 	int i;
// 	int flag;
// 	int j;

// 	i = 0;
// 	flag = 0;
// 	j = 0;
// 	while (aux[i] != '\0')
// 	{
// 		j = 0;
// 		while (aux[j] != '\0')
// 		{
// 			printf("%s I\n", aux[i]);
// 			printf("%s J\n", aux[j]);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return(flag);
// }

int		check_nums()
{
	return(0);
}

void	get_contents(char *argv, t_list *nodo)
{
	char	**aux;
	long	num;
	int		i;

	aux = ft_split(argv, ' ');
	i = 0;
	// repes(aux);
	while (aux[i] != '\0')
	{
		num = checkParams(aux[i]);
		agregar(num, nodo);
		free(aux[i]);
		i++;
	}
	free(aux);
}

int			main(int argc, char **argv)
{
	t_list nuevoNodo;
	int i;

	i = 1;
	if (!argv)
		ft_error();
	// if (!ft_checkdoubles(argv))
	// 	ft_error();
	while(i < argc)
	{
		get_contents(argv[i], &nuevoNodo);
		i++;
	}
	imprimir(&nuevoNodo);
	// tamanio();
	// printf("\n%d", ft_atoi("a2121adf"));
	// system("leaks push_swap");
}