/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:55:38 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/14 14:23:11 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int return_value;

    return_value = 0;
    while(*s1 != '\0' || *s2 != '\0')
    {
        if ((unsigned char)*s1 != (unsigned char)*s2)
        {
            return_value = (unsigned char)*s1 - (unsigned char)*s2;
            break;
        }
        s1++;
        s2++;
    }
}