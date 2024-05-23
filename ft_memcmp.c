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

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	if (n == 0)
		return (0);
	while ((*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i)) && i < n)
	{
		i++;
	}
	if (i >= n)
		return (0);
	res = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
	return (res);
}
