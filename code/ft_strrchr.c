/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:45:59 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/14 13:46:37 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *return_value;

    return_value = NULL;
    while(*s != '\0')
    {
        if(*s == (char)c)
        {
            return_value = (char*)s;
        }
        s++;
    }
    return (return_value);
}