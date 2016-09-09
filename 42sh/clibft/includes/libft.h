/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 08:48:16 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/10 14:21:19 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

size_t	ft_strlen(const char *s);
size_t	ft_count_char(const char *str, char c);
size_t	*ft_check_dquote(char *str);
size_t	ft_dquote_len(char *str);

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strnew(size_t size);
char	**ft_strsplit(const char *str, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	**ft_strsplit(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_2charcmp(char *str, char a, char b);
char	*ft_3charcmp(char *str, char a, char b, char c);
char	ft_check_literal(char a, char b, char c);
char	ft_check_literal2(char a, char b);
char	*ft_replace_literal(char *str);
char	*ft_rmpadding(char *str);
char	**ft_store_quote(char *str);
char	*ft_strndup(char *str, size_t pos, size_t n);

int		*ft_multistrlen(const char *str, char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);
int		ft_atoi_isdigit(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_intlen(int *i);
int		ft_intcmp(int *a);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	ft_putendl_fd(char const *s, int fd);
void	ft_putstr_fd(char const *s, int fd);

#endif
