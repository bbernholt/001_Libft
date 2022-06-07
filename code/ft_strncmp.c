/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:55:38 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/07 14:35:47 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, long unsigned int n)
{
	int					return_value;
	long unsigned int	i;

	return_value = 0;
	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
		{
			return_value = (unsigned char) *s1 - (unsigned char) *s2;
			break ;
		}
		s1++;
		s2++;
		i++;
	}
	return (return_value);
}
