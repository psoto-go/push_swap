/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:59:57 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/21 18:26:38 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_num(const char *str, int i, int s, int *flag)
{
	unsigned int	num;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (int)(str[i] - '0');
		i++;
	}
	if (s != '-' && num > 2147483647)
		*flag = 1;
	if (s == '-' && num > 2147483648)
		*flag = 1;
	if (s == '-')
		return (-num);
	return (num);
}

int	ft_atoi(const char *str, int *flag)
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
		return (is_num(str, i, s, flag));
	return (0);
}
