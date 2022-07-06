/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:12:21 by bbernhol          #+#    #+#             */
/*   Updated: 2022/07/06 18:55:04 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, long unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < size)
	{
		k = 0;
		while (big[i + k] == little[k] && (i + k) < size)
		{
			if (little[k + 1] == '\0')
				return ((char *)(big + i));
			k++;
		}
		i++;
	}
	return (0);
}
