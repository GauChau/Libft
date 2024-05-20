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

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	isset(const char s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s1 == s2[i])
			return (1);
		i++;
	}
	return (0);
}
int	ft_newlen(const char *s1, const char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (isset(s1[i], s2))
		i++;
	while (isset(s1[len], s2) && len >= 0)
	{
		len--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	u;
	char			*array;

	i = 0;
	u = 0;
	j = ft_newlen(s1, set) + 1;
	array = (char *)malloc((j) * sizeof(char));
	if (!array)
		return (0);
	while (isset(s1[i], set))
		i++;
	while (u < j)
	{
		array[u] = s1[i];
		u++;
		i++;
	}
	array[u] = '\0';
	return(array);
}

