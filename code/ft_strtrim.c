/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:35:16 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/10 17:31:17 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_cnt_front(char const *s1, char const *set);
static int	ft_cnt_back(char const *s1, char const *set);
static char	*ft_fill(char const *s1, int back, int front);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	front;
	int	back;

	front = ft_cnt_front(s1, set);
	back = ft_cnt_back(s1, set);
	return (ft_fill(s1, back, front));
}

static int	ft_cnt_front(char const *s1, char const *set)
{
	int	cnt_front;
	int	i;
	int	j;

	i = 0;
	j = 0;
	cnt_front = 0;
	while (j < ft_strlen(set))
	{
		if (set[j] == s1[i])
		{
			cnt_front ++;
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (cnt_front);
}

static int	ft_cnt_back(char const *s1, char const *set)
{
	int	cnt_back;
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	cnt_back = 0;
	while (j < ft_strlen(set))
	{
		if (set[j] == s1[i])
		{
			cnt_back ++;
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (cnt_back);
}

static char	*ft_fill(char const *s1, int back, int front)
{
	char	*return_value;
	int		trimmend_len;
	int		i;

	trimmend_len = (ft_strlen(s1) + 1) - (front + back);
	return_value = (char *)malloc(trimmend_len);
	i = 0;
	while (i < trimmend_len - 1)
	{
		return_value[i] = s1[front];
		front++;
		i++;
	}
	return_value[i] = '\0';
	return (return_value);
}
