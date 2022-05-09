/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isadigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:18:01 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/09 22:22:13 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int isadigit(int c)
{
    if(c <= 57 && c >= 48)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main()
{
    int x = isadigit(5);
    x = x + '0';
    //printf("fuuuck %d", x);
    write(1, &x, 1);
}