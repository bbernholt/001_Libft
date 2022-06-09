/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:37:45 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/09 23:37:52 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	strlen_dst;
	int				n;

	if (size <= (unsigned int)ft_strlen(dst))
		return (size + ft_strlen(src));
	strlen_dst = ft_strlen(dst);
	n = 0;
	while (src[n] != '\0' && strlen_dst + 1 < size)
	{
		dst[strlen_dst] = src[n];
		strlen_dst++;
		n++;
	}
	dst[strlen_dst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[n]));
}
