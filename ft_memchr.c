/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:16:46 by gchauvot          #+#    #+#             */
/*   Updated: 2024/05/17 12:16:48 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)(c))
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (0);
}
