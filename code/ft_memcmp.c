/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:53:43 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/06 17:54:56 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, long unsigned int n)
{
	int					result;
	long unsigned int	i;

	i = 1;
	result = 0;
	if (n == 0)
	{
		result = 0;
	}
	else
	{
		while (i <= n)
		{
			if (*(unsigned char *)s1 != *(unsigned char *)s2)
			{
				result = *(unsigned char *)s1 - *(unsigned char *)s2;
				break ;
			}
			s1++;
			s2++;
			i++;
		}
	}
	return (result);
}
