/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:13:28 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/21 10:27:30 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    char *ptr_return;

    i = 0;
    ptr_return = (char*)malloc(ft_strlen(s1)+ft_strlen(s2)+1);
    if(ptr_return != NULL)
    {
        while(*s1 != '\0')
        {
            ptr_return[i] = *s1;
            i++;
            s1++;
        }
        while(*s2 != '\0')
        {
            ptr_return[i] = *s2;
            i++;
            s2++;
        }
        ptr_return[i] = '\0';
    }
    return (ptr_return);
}