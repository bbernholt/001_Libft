/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:30:36 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/11 10:32:23 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, unsigned long int n)
{
    unsigned char uchar_c;
    unsigned char *ptr_uchar_s;
    unsigned long int i;

    uchar_c = c;
    ptr_uchar_s = (unsigned char*)s;
    i = 1;
    while (i <= n)
    {
        if(*ptr_uchar_s == uchar_c)
        {
            return ((void*)ptr_uchar_s);
            break;
        }
        if(i == n)
        {
            return (NULL);
        }
        i++;
        ptr_uchar_s++;
    }    
}