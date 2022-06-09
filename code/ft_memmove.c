/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:15:17 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/09 12:29:10 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long int n)
{
	char					*cast_dest;
	char					*cast_src;
	unsigned long int		i;

	i = 0;
	cast_src = (char *)src;
	cast_dest = (char *)dest;
	if (cast_dest > cast_src)
	{
		while (n != 0)
		{
			n--;
			cast_dest[n] = cast_src[n];
		}
	}
	else if (cast_dest < cast_src)
	{
		while (i < n)
		{
			cast_dest[i] = cast_src[i];
			i++;
		}
	}
	return (dest);
}
