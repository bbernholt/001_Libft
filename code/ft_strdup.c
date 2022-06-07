/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:04:46 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/05 21:51:43 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*duplicate;

	i = 0;
	duplicate = malloc(ft_strlen(s) + 1);
	if (duplicate != NULL)
	{
		while (*s != '\0')
		{
			duplicate[i] = *s;
			s++;
			i++;
		}
	}
	return (duplicate);
}
