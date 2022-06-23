/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:49:02 by bbernhol          #+#    #+#             */
/*   Updated: 2022/06/23 16:45:26 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

	/*
	void	*ptr_return;

	ptr_return = malloc(n * size);
	return (ptr_return);
	*/

void	*ft_calloc(unsigned int n, unsigned int size)
{
	void			*ptr_return;
	char			*ptr_buffer;
	unsigned int	i;

	i = 0;
	ptr_return = NULL;
	if (n == 0 || size == 0)
		return (ptr_return);
	ptr_return = malloc(n * size);
	if (ptr_return == NULL)
		return (ptr_return);
	else
	{
		ptr_buffer = (char *)ptr_return;
		while (i < n * size)
		{
			*ptr_buffer = '\0';
			ptr_buffer++;
			i++;
		}
	}
	return (ptr_return);
}
