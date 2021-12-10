/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/10 12:58:52 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Operación push
void agregar(int number) {
    printf("Agregando %d\n", number);
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

void		checkParams(char **argv)
{
	int i;
	int j;
	int flag;

	i = 1;
	j = 0;
	flag = 0;
	while (argv[i])
	{	flag = 0;
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] <= 48 || argv[i][j] >= 57)
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
			agregar(ft_atoi(argv[i]));

		i++;
	}
	imprimir();
	tamanio();
}

// void	get_numbers(char *argv, t_list **a)
// {
// 	char	**param;
// 	long	n;
// 	int		j;

// 	param = ft_split(argv, ' ');
// 	j = 0;
// 	while (param[j] != '\0')
// 	{
// 		n = ft_check_num(a, param[j]);
// 		init_stack(a, n);
// 		free(param[j]);
// 		j++;
// 	}
// 	free(param);
// }

int			main(int argc, char **argv)
{
	if(argc > 1)
	{
		checkParams(argv);

	}
}