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
#include <stdio.h>
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	isset(const char src, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (src == set[i])
			return (1);
		i++;
	}
	return (0);
}
int	ft_newlen(const char *src, const char *set)
{
	int	i;
	int	len;
	int j;

	i = 0;
	len = ft_strlen(src);
	while (isset(src[i], set))
		i++;
	j = i;
	while (isset(src[len-1], set) && len > j)
	{
		len--;
		i++;
	}
	//printf("len: %d i: %d j: %d\n",ft_strlen(src)-i, i, j);
	return (ft_strlen(src)-i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	u;
	char			*array;

	i = 0;
	u = 0;
	j = ft_newlen(s1, set)+1;
	array = (char *)malloc((j) * sizeof(char));
	if (!array)
		return (0);
	while (isset(s1[i], set))
		i++;
	while (u < j-1)
	{
		array[u] = s1[i];
		u++;
		i++;
		
	}
	//printf("u: %d i: %d j: %d\n", u ,i, j);
	array[u] = '\0';
	return(array);
}
/*
int main (void)
{
	char *burp;
	burp=ft_strtrim("   xxxtripouille", " x");
	printf("test: %s", burp);
	return (0);
}*/