/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detohe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:09:38 by psoto-go          #+#    #+#             */
/*   Updated: 2021/11/03 16:09:07 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_detohe(unsigned long int n, int mayus)
{
	int		len;
	int		i;
	char	*string;

	len = ft_hexalen(n);
	i = len - 1;
	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	if (n == 0)
		string[len - 1] = '0';
	ft_divide(n, mayus, string, len);
	return (string);
}
