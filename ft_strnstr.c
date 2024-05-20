/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:27:49 by gchauvot          #+#    #+#             */
/*   Updated: 2024/02/15 13:27:57 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	point;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			if (j == 0)
				point = i;
			j++;
		}
		else
			j = 0;
		if (little[j] == '\0')
			return (&big[point]);
		i++;
	}
	return (0);
}
