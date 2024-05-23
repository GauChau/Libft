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
	/*unsigned int	j;
	char *stemp;
	

	j = 0;
	dtemp = (char*)dest;
	stemp = (char*)src;
	while (j < n)
	{
		dtemp[j] = stemp[j];
		j++;
	}*/
	unsigned int i;
	unsigned char *stemp;
	unsigned char *dtemp;

	i = 0;
	dtemp = (unsigned char*)dest;
	stemp = (unsigned char *)src;

	if(dtemp > stemp)
	{
		while(n > 0)
		{
			n--;
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
			
		}
		*(unsigned char *)(dest + 0) = *(unsigned char *)(src + 0);
	}
	else
	{
		while (i < n)
			{
				*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
				i++;
			}
	}
	return (dest);
}