/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 22:40:54 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/07 12:33:05 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i] != '\0')
    {
        //printf("Wert von i: %d \n", i);
        //printf("Addresse von s[%d]: %p \n", i, &s[i]);
        (*f)(i, &s[i]); //&s[0] is address of fort index of the string "s"
        i++;
    }
}

