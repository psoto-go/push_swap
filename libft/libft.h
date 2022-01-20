/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:43:33 by psoto-go          #+#    #+#             */
/*   Updated: 2022/01/20 18:52:14 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

typedef struct list
{
	void			*content;
	struct list		*next;
}	t_list;

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isascii(int c);

int			ft_isprint(int c);

size_t		ft_strlen(const char *s);

void		*ft_memset(void *str, int c, size_t l);

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *str1, const void *str2, size_t n);

void		*ft_memmove(void *s1, const void *s2, size_t n);

size_t		ft_strlcpy(char *destination, const char *source, size_t size);

size_t		ft_strlcat(char *dest, const char *src, size_t size);

int			ft_toupper(int ch);

int			ft_tolower(int ch);

char		*ft_strchr(const char *str, int c);

char		*ft_strrchr(const char *str, int c);

char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

int			ft_strncmp(const char *str1, const char *str2, size_t n);

void		*ft_memchr(const void *str, int c, size_t n);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

int			ft_atoi(const char *str, int *flag);

void		*ft_calloc(size_t num, size_t size);

char		*ft_strdup(const char *src);

char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s1, char const *set);

char		**ft_split(char const *s, char c);

char		*ft_itoa(int n);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		ft_putchar_fd(char c, int fd);

void		ft_putstr_fd(char *s, int fd);

void		ft_putendl_fd(char *s, int fd);

void		ft_putnbr_fd(int n, int fd);

t_list		*ft_lstnew(void *content);

void		ft_lstadd_front(t_list **lst, t_list *new);

int			ft_lstsize(t_list *lst);

t_list		*ft_lstlast(t_list *lst);

void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstdelone(t_list *lst, void (*del)(void*));

void		ft_lstclear(t_list **lst, void (*del)(void*));

void		ft_lstiter(t_list *lst, void (*f)(void *));

#endif
