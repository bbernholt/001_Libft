/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:19:06 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/19 19:59:28 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long unsigned int ft_strlcat(char *dst, const char *src, long unsigned int size)
{
    char *last_char_at_dst;
    int strlen_dst;
    int strlen_src;

    strlen_dst = ft_strlen(dst);
    strlen_src = ft_strlen(src);
    last_char_at_dst = dst + strlen_dst;
    while((size - strlen_dst - 1) > 0 && *src != '\0')
    {
        *last_char_at_dst = *src;
        last_char_at_dst++;
        src++;
        size--;
    }
    *last_char_at_dst = '\0';
    return (ft_strlen(dst));
//The strlcat() function appends the NUL-terminated string 
//src to the end of dst.  It will append at most 
//size - strlen(dst) - 1 bytes, NUL-terminating the result.
//10     -  5    -   1 = 4
}
