/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:38:27 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/16 16:15:13 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_cnt_of_parts(char const *s, char c);
static int	ft_len_parts(char const *s, char c);
static void	ft_fill(char const **s, char c, char *ptr);

char	**ft_split(char const *s, char c)
{
	char	**ptr_to_array;
	int		nrb_of_parts;
	int		i;

	i = 0;
	nrb_of_parts = ft_cnt_of_parts(s, c);
	ptr_to_array = (char **)malloc(nrb_of_parts * 8);
	if (!ptr_to_array)
		return (0);
	while (nrb_of_parts != 0)
	{
		ptr_to_array[i] = (char *)malloc(ft_len_parts(s, c) + 1);
		if (!ptr_to_array[i])
			return (0);
		ft_fill(&s, c, ptr_to_array[i]);
		i++;
		nrb_of_parts--;
	}
	return (ptr_to_array);
}

static int	ft_cnt_of_parts(char const *s, char c)
{
	int	i;
	int	cnt_of_parts;

	i = 0;
	cnt_of_parts = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			cnt_of_parts++;
			i++;
		}
		else
			i++;
	}
	return (cnt_of_parts + 1);
}

static int	ft_len_parts(char const *s, char c)
{
	int	length;

	length = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		length++;
	}
	s++;
	return (length);
}

static void	ft_fill(char const **s, char c, char *ptr)
{
	while (**s != c && **s != '\0')
	{
		*ptr = **s;
		(*s)++;
		ptr++;
	}
	if (**s == c || **s == '\0')
	{
		*ptr = '\0';
		(*s)++;
	}
}
