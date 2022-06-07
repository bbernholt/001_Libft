/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:46:50 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/06 17:10:58 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *s, unsigned long int n)
{
	char					*cast_s;
	unsigned long int		i;

	i = 1;
	cast_s = (char *)s;
	while (i <= n)
	{
		*cast_s = '\0';
		cast_s++;
		i++;
	}
}
