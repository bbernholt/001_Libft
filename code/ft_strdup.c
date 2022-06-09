/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:04:46 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/09 12:59:08 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_strlenght(const char *s);

char	*ft_strdup(const char *s)
{
	int		i;
	char	*duplicate;

	i = 0;
	duplicate = malloc(ft_strlenght(s) + 1);
	if (duplicate != NULL)
	{
		while (*s != '\0')
		{
			duplicate[i] = *s;
			s++;
			i++;
		}
		duplicate[i] = '\0';
	}
	return (duplicate);
}

static int	ft_strlenght(const char *s)
{
	int	strlen;

	strlen = 0;
	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
