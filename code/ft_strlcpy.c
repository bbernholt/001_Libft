/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:12:33 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/10 00:47:43 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	strlen_src;

	i = 0;
	strlen_src = (size_t)ft_strlen(src);
	if (size == 0)
		return (strlen_src);
	else if (strlen_src + 1 <= size)
	{
		while (i < strlen_src + 1)
		{
			dst[i] = src[i];
			i++;
		}	
	}
	else if (!(strlen_src + 1 < size))
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (strlen_src);
}
