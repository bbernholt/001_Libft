/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:31:45 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/23 20:00:21 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	int				i;
	unsigned int 	len_s;
	char			*ptr_return;

	i = 0;
	ptr_return = NULL;
	len_s = ft_strlen(s);
	if (!s)
		return (ptr_return);
	if (len_s <= start)
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
		while (len != 0)
		{
			ptr_return[i] = s[start + i];
			i++;
			len--;
		}
		ptr_return[i] = '\0';
	}
	return (ptr_return);
}
