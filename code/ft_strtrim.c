/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbernhol <bbernhol@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:35:16 by bbernhol          #+#    #+#             */
/*   Updated: 2022/05/31 17:43:04 by bbernhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set);
int ft_cnt_front(char const *s1, char const *set);
int ft_cnt_back(char const *s1, char const *set);
char *ft_fill(char const *s1, int length, int front);

// int main() {

//   char text[] = "123Text23";
//   char text2[] = "123";
//   char *s1 = text;
//   char *set = text2;
  
//   int x = ft_strtrim(s1, set);
//   return 0;
// }


char *ft_strtrim(char const *s1, char const *set)
{
  int f = ft_cnt_front(s1, set);
  int b = ft_cnt_back(s1, set);
  return(ft_fill(s1, ft_strlen(s1)-f-b, f));
}

int ft_cnt_front(char const *s1, char const *set)
{
  int cnt_front;
  
  cnt_front = 0;
  while(*s1 == *set)
  {
      cnt_front ++;
      s1++;
      set++;
  }
  return (cnt_front);
}

int ft_cnt_back(char const *s1, char const *set)
{
  int cnt_back;
  int strlen_set;
  
  cnt_back = 0;
  strlen_set = ft_strlen(set);
  s1 += ft_strlen(s1)-1;
  set += ft_strlen(set)-1;
  while((strlen_set != 0) && (*s1 == *set))
  {
      cnt_back++;
      s1--;
      set--;
      strlen_set--;
  }
  return (cnt_back);
}

char *ft_fill(char const *s1, int length, int front)
{
  char* return_value;
  int i;

  return_value = (char*)malloc(length+1);
  i = 0;
  while(length)
  {
    return_value[i] = s1[front];
    front++;
    i++;
    length--;
  }
  return_value[i] = '\0';
  return (return_value);
}
