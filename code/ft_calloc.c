/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:49:02 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/20 07:53:26 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void* calloc(unsigned int n, unsigned int size)
{
    void* ptr_return;

    ptr_return = malloc(n * size);

    return (ptr_return);
}