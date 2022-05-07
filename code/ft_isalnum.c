/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:00:02 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/07 13:09:06 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_isalnum(int c)
{
    if(c <= 57 && c >= 48)
    {
        return (1);
    }
    else if(c <= 90 && c >= 65)
    {
        return (1);
    }
    else if(c <= 122 && c >= 97)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}