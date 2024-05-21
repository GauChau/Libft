/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:17:05 by gchauvot          #+#    #+#             */
/*   Updated: 2024/05/20 15:17:07 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

unsigned int		ft_strlcat(char *dst, const char *src, unsigned int siz);
unsigned int		ft_strlcpy(char *dst, const char *src, unsigned int siz);
unsigned int		ft_strlen(char *str);
int					ft_atoi(const char *nptr);
void				*ft_bzero(void *s, size_t n);
void				*ft_calloc(unsigned int nemb, unsigned int size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				*ft_memcpy(void *dest, const void *src, unsigned int n);
void				*ft_memmove(void *dest, const void *src, unsigned int n);
void				*ft_memset(void *s, int c, unsigned int n);
void				*ft_memchr(const void *s, int c, unsigned int n);
int					ft_memcmp(const void *s1, const void *s2, unsigned int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strnstr(const char *big, const char *little, unsigned int len);
const char			*ft_strrchr(const char *s, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, unsigned int len);
int					ft_tolower(int c);
int					ft_toupper(int c);
#endif