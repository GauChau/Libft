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

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int siz)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	j = d_len;
	if (d_len >= siz)
		return (s_len + siz);
	while (src[i] != '\0' && i < siz - 1 - d_len)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (d_len + s_len);
}

/*
unsigned int	ftmin(unsigned int x, unsigned int y)
{
	if (x < y)
		return (x);
	return (y);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int siz)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	in_dst;

	i = 0;
	in_dst = ft_strlen(dst);
	j = siz - 1;
	while (i < siz && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (siz > ft_strlen(dst))
		dst[j] = '\0';
	return (ft_strlen(src) + ftmin((in_dst), siz));
}*/