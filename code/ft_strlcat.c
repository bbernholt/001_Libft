/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:19:06 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/06 18:14:35 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	char	*last_char_at_dst;
	int		strlen_dst;

	strlen_dst = ft_strlen(dst);
	last_char_at_dst = dst + strlen_dst;
	while ((size - strlen_dst - 1) > 0 && *src != '\0')
	{
		*last_char_at_dst = *src;
		last_char_at_dst++;
		src++;
		size--;
	}
	*last_char_at_dst = '\0';
	return (ft_strlen(dst));
}
