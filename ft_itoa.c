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

int size(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{	
		n /= 10;
		i++;
	}
	if (n<0)
		i++;
	return (i);
}

char *ft_itoa(int n)
{
	int len;
	char *array;

	len = size(n);
	array = (char *)malloc((len + 1 ) * sizeof(char));
	if (!array)
		return (0);
	if (n < 0)
		array[0] = '-';
	array[len--] = '\0';
	while (array[len] != '-' && len >= 0)
	{
		array[len] = n % 10;
		n = n/10;
		len --;
	}
	return (array);
}
