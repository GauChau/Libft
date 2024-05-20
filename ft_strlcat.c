/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:16:46 by gchauvot          #+#    #+#             */
/*   Updated: 2024/05/17 12:16:48 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ftmin(int x, int y)
{
	if (x < y)
		return (x);
	return (y);
}

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int siz)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	in_dst;

	i = 0;
	in_dst = ft_strlen(dst);
	j = ft_strlen(dst) - 1;
	while (i < siz)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (siz > ft_strlen(dst))
		dst[i] = '\0';
	return (ft_strlen(src) + ftmin((in_dst), siz));
}
