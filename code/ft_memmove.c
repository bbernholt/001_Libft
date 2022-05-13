/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:15:17 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/13 15:04:00 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, unsigned long int n)
{
    char buffer[n];
    char *cast_dest;
    char *cast_src;
    int i;

    i=1;
    cast_src = (char*)src;
    cast_dest = (char*)dest;
    while(i <= n)
    {
        buffer[i] = *cast_src;
        *cast_dest = buffer[i];
        cast_dest++;
        cast_src++;
        i++;
    }
    return (dest);
}
