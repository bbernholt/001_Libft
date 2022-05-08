/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:53:43 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/08 21:09:40 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, long unsigned int n)
{
   int result;
   int i;
   
   i = 1;
   result = 0;
   if(n == 0)
   {
       result = 0;
   }
   else
   {
       while(i <= n)
       {
            if(*(unsigned char*)s1 != *(unsigned char*)s2)
            {
                result = *(unsigned char*)s1 - *(unsigned char*)s2;
                break;
            }
            (unsigned char*)s1++;
            (unsigned char*)s2++;
            i++;
       }
   }
   return (result);
}