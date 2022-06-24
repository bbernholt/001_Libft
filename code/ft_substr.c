/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:31:45 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/24 18:42:40 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	int				i;
	char			*ptr_return;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= (int)start)
	{
		ptr_return = (char *)malloc(1);
		if (!ptr_return)
			return (ptr_return);
		ptr_return[i] = '\0';
		return (ptr_return);
	}
	ptr_return = (char *)malloc(len + 1);
	if (ptr_return != NULL)
	{
		while (i < (int)len)
		{
			ptr_return[i] = s[start + i];
			i++;
		}
		ptr_return[i] = '\0';
	}
	return (ptr_return);
}
