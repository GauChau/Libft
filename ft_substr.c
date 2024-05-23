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

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	char			*array;

	i = 0;
	j = start;
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (!array)
		return (0);
	while (i < len && s[j] != '\0')
	{
		array[i] = s[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}
