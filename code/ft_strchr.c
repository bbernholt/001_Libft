/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:09:25 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/07 15:04:52 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*return_value;

	return_value = NULL;
	if (*s == (char)c)
		return_value = (char *)s;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return_value = (char *)s;
			break ;
		}
		s++;
		if (*s == (char)c)
		{
			return_value = (char *)s;
			break ;
		}
	}
	return (return_value);
}
