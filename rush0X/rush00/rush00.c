/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:08:40 by althotse          #+#    #+#             */
/*   Updated: 2020/07/15 10:54:24 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"
#include <stdlib.h>


void rush(int x, int y)
{
  char c;
  int q =0;
  while ( q < y)
  {
	  int p =0;
      while ( p < x)
	  {
        if ((q == 0 || q == y-1) && (p == 0 || p == x-1))
		{
          c='o';
		}
        else if (q == 0 || q == y-1)
		{
          c = '-';
		}
        else if (p ==0 || p == x-1)
		{
          c = '|';
		}
        else
		{
		   	c = ' ';
		}
          ft_putchar(c);
		  p++;
	  }
	  q++;
      ft_putchar('\n');
  }
}
