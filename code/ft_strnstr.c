/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:12:21 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/19 19:01:26 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_logic(const char **big_string, const char **little_string, long unsigned int size, int strlen_little);

char * ft_strnstr(const char *big, const char *little, long unsigned int size)
{
    char *ptr_return;
    int found;
    int strlen_little;

    ptr_return = NULL;
    found = 0;
    strlen_little = 0;
    if(ft_strlen(little) == 0)
    {
        printf("1 \n");
        ptr_return = (char*)big;
    } 
    else
    {
        
        strlen_little = ft_strlen(little);
        found = ft_logic(&big, &little, size, ft_strlen(little));
        if(found == 1)
        {
            printf("2 \n");
            printf("Länge Littel: %d \n", strlen_little);
            ptr_return = (char*)big - (strlen_little-1);
        }
        else
        {
            printf("3 \n");
            ptr_return = NULL;
        }
    }
    return (ptr_return);
}

int ft_logic(const char **big_string, const char **little_string, long unsigned int size, int strlen_little)
{
    int found_final;
    int found_cnt;

    found_final = 0;
    found_cnt = 0;
    while(size != 0 && **big_string != '\0')
    {
        if(**big_string == **little_string)
        {
            found_cnt++;
            (*little_string)++;
        }
        else
            found_cnt = 0;
        if(found_cnt == strlen_little)
        {
            found_final = 1;
            break;
        }
        size--;
        (*big_string)++;
    }
    return (found_final);
}
