/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:21:43 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/07 13:23:31 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_isascii(int c)
{
    if(c <= 255 && c >= 0)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}