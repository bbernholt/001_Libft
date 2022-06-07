/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:45:59 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/07 15:07:34 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
		}
		s++;
		if (*s == (char)c)
		{
			return_value = (char *)s;
		}
	}
	return (return_value);
}
