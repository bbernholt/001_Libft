/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:58:54 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/07 13:14:17 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
void func(unsigned int, char*);

int main(void)
{
    // ft_putnbr_fd(5, 1);
    // write(1, "\n", 1);
    // ft_putstr_fd("Text", 2);
    // ft_putendl_fd("another_Text", 2);
    // ft_putchar_fd('a', 2);
    int x = ft_isalnum(47);
    x += '0';
    write(1, &x, 1);
    char *cheat = "cheat ist mein sohn";
    //ft_striteri(cheat, func);
    //func(1, "alles lowercase");
    //void ft_striteri(char *s, void (*f)(unsigned int, char*));
}

void func(unsigned int x, char* y)
{
//     printf("Wert von x: %d \n", x);
//     printf("Addresse übergeben y=%p \n", y);
//     printf("Character übergeben y=%c \n", *y);
    if(*y >= 'a' && *y <= 'z')
    {
        //printf("FUUUUUCK\n");
        (*y) -= 32;
    }
    write(1, y, 1);
    //write(1, "\n", 1);
}