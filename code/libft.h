/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:58:58 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/09 22:04:57 by bbernhol         ###   ########.fr       */
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
int ft_isadigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *s);
int ft_memcmp(const void *s1, const void *s2, long unsigned int n);

#endif // MY_HEADER
