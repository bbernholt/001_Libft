/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:12:33 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/16 22:21:32 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long unsigned int ft_strlcpy(char *dst, const char *src, long unsigned int size)
{
    long unsigned int i;
    long unsigned int return_value;
    
    i = 1;
    return_value = (unsigned int)ft_strlen(src);
    while(i < size)
    {
        *dst = *src;
        dst++;
        src++;
        i++;
    }
    if(size > 0)
    {
        *dst = '\0';
    }
    return (return_value);
}

// The strlcpy() function copies up to size - 
// 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. 
 
// strlcpy() and strlcat() take the full size of the buffer (not just the length) and 
// guarantee to NUL-terminate the result as long as size is larger than 0. 
// Note that a byte for the NUL should be included in size. 
// Also note that strlcpy() and strlcat() only 
// operate on true ''C'' strings. This means that for strlcpy() src must be NUL-terminated 
// and for strlcat() both src and dst must be NUL-terminated. 