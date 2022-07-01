/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:49:02 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/30 19:21:45 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(unsigned int n, unsigned int size)
{
	char			*ptr_buffer;
	unsigned int	i;

	i = 0;
	ptr_buffer = NULL;
	if (n == 0 || size == 0)
		return (NULL);
	ptr_buffer = malloc(n * size);
	if (ptr_buffer == NULL)
		return (NULL);
	while (i < (n * size))
	{
		ptr_buffer[i] = '\0';
		i++;
	}
	return ((void *)ptr_buffer);
}
