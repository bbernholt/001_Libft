/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:58:58 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/16 21:35:08 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strlen(const char *s);
int					ft_atoi(const char *str);
int					ft_memcmp(const void *s1, \
const void *s2, long unsigned int n);
void				*ft_memcpy(void *dest, void *src, int n);
void				*ft_memchr(const void *s, int c, unsigned long int n);
void				*ft_memmove(void *dest, const void *src, \
unsigned long int n);
void				*ft_memset(void *s, int c, unsigned long int n);
void				ft_bzero(void *s, unsigned long int n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, \
long unsigned int n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
long unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
char				*ft_strnstr(const char *big, const char *little, \
long unsigned int size);
void				*ft_calloc(unsigned int n, unsigned int size);
char				*ft_strdup(const char *s);
char				*ft_substr(char const *s, unsigned int start, \
unsigned int len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif // MY_HEADER
