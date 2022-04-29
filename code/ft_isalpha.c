/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:18:01 by bbernhol          #+#    #+#             */
/*   Updated: 2022/04/29 23:23:27 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int isalpha(int c)
{
    if((c <= 90 && c >= 65) || (c <= 122 && c >= 98))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}