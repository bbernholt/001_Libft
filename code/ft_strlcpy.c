/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:12:33 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/07 14:44:52 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long unsigned int	ft_strlcpy(char *dst, \
const char *src, long unsigned int size)
{
	long unsigned int	i;
	long unsigned int	return_value;

	i = 1;
	return_value = (unsigned int)ft_strlen(src);
	while (i < size)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	if (size > 0)
	{
		*dst = '\0';
	}
	return (return_value);
}
