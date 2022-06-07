/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:59:12 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/06 17:08:23 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *s, int c, unsigned long int n)
{
	char					*cast_s;
	unsigned long int		i;

	i = 1;
	cast_s = (char *)s;
	while (i <= n)
	{
		*cast_s = (char)c;
		cast_s++;
		i++;
	}
	return (s);
}
