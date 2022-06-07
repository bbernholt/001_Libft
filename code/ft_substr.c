/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:31:45 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/07 13:47:32 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	int		i;
	char	*ptr_return;

	i = 0;
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
