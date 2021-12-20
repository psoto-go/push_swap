/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:42:54 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/13 18:31:00 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*str_to_num(char *result, int n, int lennum)
{
	int	modulo;
	int	signo;

	signo = 1;
	if (n < 0)
		signo = -1;
	result[lennum--] = '\0';
	while (lennum > 1)
	{
		modulo = (n % 10) * signo;
		result[lennum--] = modulo + '0';
		n /= 10;
	}
	if (signo == 1)
	{
		result[lennum] = (n % 10) + '0';
		result[0] = (n / 10) + '0';
	}
	else if (signo == -1)
	{
		result[lennum] = (n * -1) + '0';
		result[0] = '-';
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		lennum;

	lennum = len(n);
	if (n <= 0)
		lennum++;
	result = (char *)malloc((lennum + 1) * sizeof(char));
	if (!result)
		return (0);
	if (n > 0 && n < 10)
	{
		result[0] = n + '0';
		result[1] = '\0';
	}
	else
		result = str_to_num(result, n, lennum);
	return (result);
}
