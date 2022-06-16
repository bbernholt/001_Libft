/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:38:27 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/16 21:31:18 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_cnt_parts(const char *str, char c);
static char	*ft_fill(const char *str, int start, int finish);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**return_value;

	i = 0;
	j = 0;
	index = -1;
	return_value = malloc((ft_cnt_parts(s, c) + 1) * 8);
	if (!s || !return_value)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			return_value[j++] = ft_fill(s, index, i);
			index = -1;
		}
		i++;
	}
	return_value[j] = 0;
	return (return_value);
}

static int	ft_cnt_parts(const char *str, char c)
{
	int	nbr_parts;
	int	part_counted;

	nbr_parts = 0;
	part_counted = 0;
	while (*str)
	{
		if (*str != c && part_counted == 0)
		{
			part_counted = 1;
			nbr_parts++;
		}
		else if (*str == c)
			part_counted = 0;
		str++;
	}
	return (nbr_parts);
}

static char	*ft_fill(const char *str, int start, int finish)
{
	char	*splitted_str;
	int		i;

	i = 0;
	splitted_str = malloc(finish - start + 1);
	while (start < finish)
		splitted_str[i++] = str[start++];
	splitted_str[i] = '\0';
	return (splitted_str);
}
