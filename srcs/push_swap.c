/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/10 17:47:39 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Operación push
void agregar(int number) {
    // printf("Agregando %d\n", number);
    // El que se agregará; reservamos memoria
    struct nodo *nuevoNodo;
	
	nuevoNodo = malloc(sizeof(struct nodo));
    // Le ponemos el dato
    nuevoNodo->number = number;
    // Y ahora el nuevo nodo es el superior, y su siguiente
    // es el que antes era superior
    nuevoNodo->next = superior;
    superior = nuevoNodo;
}

void imprimir(void) {
    printf("Imprimiendo...\n");
    struct nodo *temporal = superior;
    while (temporal != NULL) {
        printf("%d\n", temporal->number);
        temporal = temporal->next;
    }
}

void	tamanio(void){
    int contador = 0;
    struct nodo *temporal = superior;
    while (temporal != NULL) {
		contador++;
        temporal = temporal->next;
    }
	printf("Contador es: %d", contador);
}

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

void	get_numbers(char *argv)
{
	char	**aux;
	long	num;
	int		i;

	aux = ft_split(argv, ' ');
	i = 0;
	while (aux[i] != '\0')
	{
		num = checkParams(aux[i]);
		agregar(num);
		free(aux[i]);
		i++;
	}
	free(aux);
}

int			main(int argc, char **argv)
{
	int i;

	i = 1;
	if (!argv)
		ft_error();
	// if (!ft_checkdoubles(argv))
	// 	ft_error();
	while(i < argc)
	{
		get_numbers(argv[i]);
		i++;
	}
	// imprimir();
	// tamanio();
	// printf("\n%d", ft_atoi("a2121adf"));
	// system("leaks push_swap");
}