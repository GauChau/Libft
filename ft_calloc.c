/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:16:46 by gchauvot          #+#    #+#             */
/*   Updated: 2024/05/17 12:16:48 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int nemb, unsigned int size)
{
	unsigned int	i;
	void			*array;

	i = 0;
	array = (void *)malloc((nemb) * size);
	if (!array)
		return (0);
	while (i < size)
	{
		*(unsigned char *)(array + i) = 0;
		i++;
	}
	return (array);
}
