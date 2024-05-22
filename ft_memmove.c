/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:16:46 by gchauvot          #+#    #+#             */
/*   Updated: 2024/05/17 12:16:48 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	j;
	char *stemp;
	char *dtemp;

	j = 0;
	dtemp = (char*)dest;
	stemp = (char*)src;
	while (j < n)
	{
		dtemp[j] = stemp[j];
		j++;
	}
	/*while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(temp + i);
		i++;
	}*/
	return (dtemp);
}