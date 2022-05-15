/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:58:58 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/15 14:18:08 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER   /* Include guard */
#define MY_HEADER

void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int toupper(int c);
int tolower(int c);
int ft_strlen(const char *s);
int ft_memcmp(const void *s1, const void *s2, long unsigned int n);
void *ft_memcpy(void *dest, void *src, int n);
void *ft_memchr(const void *s, int c, unsigned long int n);
void *ft_memmove(void *dest, const void *src, unsigned long int n);
void *ft_memset(void *s, int c, unsigned long int n);
void ft_bzero(void *s, unsigned long int n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strcmp(const char *s1, const char *s2);
long unsigned int ft_strlcpy(char *dst, const char *src, long unsigned int size);


#endif // MY_HEADER
