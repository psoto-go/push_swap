/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:45 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/01 19:38:10 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(const char *str, int i, int s)
{
	unsigned long long	num;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (int)(str[i] - '0');
		i++;
	}
	if (s != '-' && num > 9223372036854775807)
		return (-1);
	if (s == '-' && num > 9223372036854775807)
		return (0);
	if (s == '-')
		return (-num);
	return (num);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	num;

	i = 0;
	num = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		s = '+';
		if (str[i] == '-')
			s = '-';
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		return (is_num(str, i, s));
	return (0);
}


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
    struct nodo *temporal;
    while (temporal != NULL) {
		contador++;
        temporal = temporal->next;
    }
	printf("Contador es: %d", contador);
}

int		main(int argc, char **argv)
{
	int count;

	count = 1;
	if(argc > 1)
	{
		while(argv[count])
		{
			agregar(ft_atoi(argv[count]));
			count++;

		}
		imprimir();
		tamanio();
	}
}