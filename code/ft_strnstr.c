/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:12:21 by bbernhol          #+#    #+#             */
/*   Updated: 2022/07/01 13:18:55 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, long unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	len;

	i = 0;
	k = 0;
	len = ft_strlen(little);
	if (!little[k])
		return ((char *)big);
	while (big[i] != '\0' && i < size)
	{
		while (big[i] == little[k] && i < size)
		{
			if (k == (len - 1))
				return ((char *)big + (i - k));
			i++;
			k++;
		}
		i++;
		k = 0;
	}
	return (NULL);
}
