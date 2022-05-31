/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:38:27 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/31 07:27:04 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int ft_cnt_of_parts(char const *s, char c);
void ft_len_of_parts(char const *s, char c, int* array);
void ft_fill(char const *s, char **ptr_to_array_of_ptr, int len_of_parts, char c);


char **ft_split(char const *s, char c)
{
    int i = 0;
    int cnt_of_parts = ft_cnt_of_parts(s, c);
    int len_of_parts[cnt_of_parts+1];
    ft_len_of_parts(s, c, len_of_parts);
    
    char **ptr_to_array_of_ptr;
    ptr_to_array_of_ptr = (char**)malloc(cnt_of_parts * 8);
    while(cnt_of_parts != 0)
    {
        ptr_to_array_of_ptr[i] = (char*)malloc(len_of_parts[i]);
        ft_fill(s, ptr_to_array_of_ptr, len_of_parts[i], c);
        cnt_of_parts--;
        i++;
    }
    return (ptr_to_array_of_ptr);
}

int ft_cnt_of_parts(char const *s, char c)
{
    int i;
    int cnt_of_parts;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            cnt_of_parts++;
            s[i++];
        }
        s[i++];
    }
    return (cnt_of_parts);
}

void ft_len_of_parts(char const *s, char c, int* array)
{
    int i;
    int j;
    int len_of_parts;

    i = 0;
    j = 0;
    len_of_parts = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            array[j] = (len_of_parts + 2);
            len_of_parts = 0;
            s[i++];
            j++;
        }
        len_of_parts++;
        s[i++];
    }
    array[j] = (len_of_parts + 2);
}

void ft_fill(char const *s, char **ptr_to_array_of_ptr, int len_of_parts, char c)
{
    int i;

    i = 0;
    while (len_of_parts != 0)
    {
        if(*s == c)
            *ptr_to_array_of_ptr[i] = '\0';
        else
            *ptr_to_array_of_ptr[i] = *s;
        s++;
        i++;
        len_of_parts--;
    }
    
}