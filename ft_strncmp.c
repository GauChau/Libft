/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:27:49 by gchauvot          #+#    #+#             */
/*   Updated: 2024/02/15 13:27:57 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)s1[i] == (unsigned char)s2[i])
		&& (unsigned char)s1[i] != '\0' && i < n - 1)
	{
		if ((unsigned char)s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	res = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (res);
}
