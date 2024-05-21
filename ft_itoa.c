/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:51:13 by gchauvot          #+#    #+#             */
/*   Updated: 2024/05/20 10:51:15 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long	size(long n)
{
	long	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{	
		n /= 10;
		i++;
	}
	return (i);
}

long	ft_dash(long nb, char *array)
{
	if (nb < 0)
	{
		array[0] = '-';
		nb = -1 * nb;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nb;
	char	*array;

	len = 0;
	len = size(n);
	nb = (long)n;
	array = (char *)malloc((len + 1) * sizeof(char));
	if (!array)
		return (0);
	nb = ft_dash(nb, array);
	array[len] = '\0';
	if (len >= 1)
		len--;
	while (len >= 0)
	{
		if (n < 0 && len == 0)
			break ;
		array[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (array);
}
