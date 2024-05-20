/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:51:13 by gchauvot          #+#    #+#             */
/*   Updated: 2024/05/20 10:51:15 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cword(char const *s, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	word = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (s[i] == c)
				word = 0;
		
	}
	return (count)
}

unsigned int	ft_strlenb(char *str,c char c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

char *strdupb(const char *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	char			*array;

	i = 0;
	len = ft_strlenb(s, c);
	array = (char *)malloc((len + 1) * sizeof(char));
	if (!array)
		return (0);
	while (i < len)
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

char **ft_split(char const *s, char c)
{
	char **array;
	unsigned int	i;
	unsigned int	j;
	int	word;

	i = 0;
	j = 0;
	word = 0;
	array = (char **)malloc((cword(s,c)) * sizeof(char*));
	if (!array)
		return (0);

	while (s[i] != '\0')
	{	
		if (word == 0 && s[i] != c)
		{
			array[j] = strdupb(&s[i], c);
			word = 1;
			j++;
		}
		if (s[i] == c)
			word = 0;
		i++;
	}
	return (array)
}